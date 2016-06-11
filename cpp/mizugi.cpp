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

int main(void){
    auto lengthes = split(readline(), ' ');
    auto before = readline();
    auto after = readline();
    
    map<char, int> chlist;
    for (auto ch : after) {
        if (!chlist[ch]) {
            chlist[ch] = 1;
        }else{
            chlist[ch] += 1;
        }
    }
    for (auto ch : before) {
        if (chlist[ch] > 0)  {
            chlist[ch] -= 1;
        }
    }
    auto required = 0;
    for (auto pair : chlist) {
        required += pair.second;
    }
    cout << required << endl;
    
    return 0;
}

