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
    if ((stoi(arr[1]) % stoi(arr[0])) == 0) {
        cout << "ok" << endl;
    }else{
        cout << "ng" << endl;
    }
    return 0;
}


