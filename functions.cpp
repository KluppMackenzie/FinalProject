#include "functions.h"

#include <iostream>
using namespace std;
//Continue Function
int con() {
    string in;
    do {
        cout << "enter 1 to continue.... ";
        cin >> in;
    }while (in != "1");
    return 0;
}

int attack(int in, string fightOptions[][]) {
    int damage, pat = 0;
    string attack;

    do {
        if (pat > 4) cout << "your foe is getting impatient do something before they ready their next attack \n";
        if (pat > 6) {
            cout << "you lost your turn and automatically did sheild, foe is now attacking.\n";
            return 0;
        }
        cout << "How will you attack?\n";
        cout << fightOptions[in][0] << "[1] " <<fightOptions[in][1]<< "[2] " <<fightOptions[in][2] << "[3] " <<fightOptions[in][3] << "[4] " << endl;

        cin >> attack;
        pat ++;
    }while (attack != "1" && attack != "2" && attack != "3" && attack != "4");


    return damage;
}