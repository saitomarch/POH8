#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
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
    auto cnt = stoi(readline());
    auto arr = split(readline(), ' ');
    vector<int> arrNum;
    for (auto str : arr) {
        arrNum.push_back(stoi(str));
    }
    sort(arrNum.begin(), arrNum.end());
    cout << arrNum[cnt / 2] << endl;
    return 0;
}

