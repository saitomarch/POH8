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
    auto times = stoi(readline());
    map<int, string> actMap;
    
    for (auto cnt = 0; cnt < times; cnt++) {
        auto arr = split(readline(), ' ');
        actMap[stoi(arr[0])] = arr[1];
    }
    
    auto hours = 24;
    auto temp = 0;
    auto cost = 0;
    
    for (auto hour = 0; hour <= hours; hour++) {
        if (hour > 0) {
            if (temp > 0) {
                temp--;
                cost += 2;
            }else{
                cost += 1;
            }
        }
        if (!actMap[hour].empty()) {
            if (actMap[hour] == "in") {
                temp += 5;
            }else if(actMap[hour] == "out") {
                temp += 3;
            }
        }
    }
    cout << cost << endl;
    
    return 0;
}

