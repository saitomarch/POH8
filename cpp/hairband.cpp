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
    auto fanArr = split(readline(), ' ');
    auto fans = stoi(fanArr[0]);
    auto cardCost = stoi(fanArr[1]);
    
    auto penArr = split(readline(), ' ');
    auto penCapacity = stoi(penArr[0]);
    auto penCost = stoi(penArr[1]);
    
    auto usedPens = (fans / penCapacity) + ((fans % penCapacity) > 0 ? 1 : 0);
    auto cost = (fans * cardCost) + (usedPens * penCost);
    
    cout << cost << endl;
    
    return 0;
}

