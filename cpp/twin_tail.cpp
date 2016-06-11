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
    auto len = stoi(readline());
    auto at = stoi(readline());
    for (int idx = 1; idx <= len; idx++) {
        cout << (idx == at ? "+" : "-");
    }
    cout << endl;
    return 0;
}

