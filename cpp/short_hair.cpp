#include <iostream>
#include <string>

using namespace std;

string readline()
{
    string str;
    getline(cin, str);
    return str;
}

int main(void)
{
    auto times = stoi(readline());
    auto str = readline();
    for (auto cnt = 0; cnt < times; cnt++) {
        cout << str << endl;
    }
    return 0;
}

