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
    auto eventPerDay = stoi(readline());
    auto events = stoi(readline());
    auto weeks = (events / (eventPerDay * 2)) + ((events % (eventPerDay * 2)) == 0 ? 0 : 1);
    cout << weeks << endl;
    return 0;
}

