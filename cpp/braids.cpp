#include <iostream>
#include <string>

using namespace std;

string readline()
{
    string str;
    getline(cin, str);
    return str;
}

int main(void){
    auto minute = 60;
    auto totaltime = stoi(readline()) * minute;
    auto resttime = totaltime;
    auto songs = stoi(readline());
    auto availableSongs = 0;
    auto overs = false;
    
    for (auto cnt = 0; cnt < songs; cnt++) {
        auto time = stoi(readline());
        resttime -= time;
        if (resttime <= 0) {
            overs = true;
            break;
        }else{
            availableSongs++;
        }
    }
    
    if (overs) {
        cout << availableSongs << endl;
    }else{
        cout << "OK" << endl;
    }
    
    return 0;
}

