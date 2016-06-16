#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string readline()
{
    string str;
    getline(cin, str);
    return str;
}

vector<string> split(const string &str, char sep)
{
    vector<string> vec;
    istringstream sstream(str);
    string buf;
    while (getline(sstream, buf, sep)) {
        vec.push_back(buf);
    }
    return vec;
}

int main(void)
{
    auto strarr = split(readline(), ' ');
    vector<int> cardarr;
    for (auto str : strarr) {
        int num;
        if (str == "J") {
            num = 11;
        }else if(str == "Q") {
            num = 12;
        }else if(str == "K") {
            num = 13;
        }else if(str == "A") {
            num = 14;
        }else if(str == "2") {
            num = 15;
        }else{
            num = stoi(str);
        }
        cardarr.push_back(num);
    }
    
    map<int, int> rankmap;
    auto lastidx = -1;
    auto lastnum = 0;
    auto ranknum = 1;
    auto finished = false;
    
    while (!finished) {
        for (int idx = 0; idx < cardarr.size(); idx++) {
            if (idx == lastidx) {
                lastidx = -1;
                lastnum = 0;
                continue;
            }
            if (rankmap[idx]) {
                continue;
            }
            if (lastnum < cardarr[idx]) {
                rankmap[idx] = ranknum;
                lastidx = idx;
                lastnum = cardarr[idx];
                ranknum++;
            }
            if (rankmap.size() == cardarr.size()) {
                finished = true;
                for (auto pair : rankmap) {
                    if (pair.second == 0) {
                        finished = false;
                        break;
                    }
                }
            }
        }
    }
    
    for (auto pair : rankmap) {
        cout << pair.second << endl;
    }
    
    return 0;
}

