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
    auto arr = split(readline(), ' ');
    auto walked = stoi(arr[0]) - stoi(arr[1]);
    if (walked < 0) {
        walked = 0;
    }
    cout << walked << endl;
    return 0;
}

