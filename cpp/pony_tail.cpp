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

int main(void)
{
    auto success = 0;
    for (auto cnt = 0; cnt < 5; cnt++) {
    auto arr = split(readline(), ' ');
        if (arr[0] == arr[1]) {
            success++;
        }
    }
    if (success >= 3) {
        cout << "OK" << endl;
    }else{
        cout << "NG" << endl;
    }
    return 0;
}

