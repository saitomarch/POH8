nclude <iostream>
using namespace std;
int main(void)
{
    string str;
    getline(cin, str);
    
    auto price = stoi(str);
    
    auto ptr = price / 100;
    if (price >= 1000) {
        ptr += 10;
    }
    cout << ptr << endl;
    
    return 0;
}

