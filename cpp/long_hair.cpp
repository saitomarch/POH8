#include <string>
#include <iostream>

using namespace std;

int main(void)
{
    string str;
    getline(cin, str);
    if (stoi(str) % 7 == 0) {
        cout << "lucky" << endl;
    }else{
        cout << "unlucky" << endl;
    }
    return 0;
}

