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

int attack(int in, string fightOptions[3][4], bool &distant, bool &sheild, bool &opSheild) {
    //initalizing my variables
    int damage = 0, pat = 0;
    string attack;
    sheild = false;
    // do while loop to gain player input but not letting it past till given a valid response
    do {
        //if a user messes up it will keep track of how many times they didnt input a valid response
        if (pat > 4) cout << "your foe is getting impatient do something before they ready their next attack \n";
        if (pat > 6) {
            cout << "you lost your turn and automatically did sheild, foe is now attacking.\n";
            sheild = true;
            //stops the function early so it doesnt run all the way through
            return 0;
        }
        //outputs
        cout << "How will you attack?\n";
        cout << fightOptions[in][0] << "[1] " <<fightOptions[in][1]<< "[2] " <<fightOptions[in][2] << "[3] " <<fightOptions[in][3] << "[4] " << endl;
        cin >> attack;
        pat ++;
    }while (attack != "1" && attack != "2" && attack != "3" && attack != "4");
    if (attack == "3") {
        distant = true;
        damage = 1;
        cout << "you decided to abscond and get out of their by pushing off of your opponent \n they take 1 damage and you are safe from close attacks";
    }else if (attack == "2") {
        sheild = true;
        damage = 0;
        cout << "you decided to use Sheild \n you are safe from the next attack.\n";
    }else if (attack == "1") {
        damage = 5;
        if (opSheild) {
            cout << "you decided to "<< fightOptions[in][0] <<" \n your opponet's sheild was up :0\n";
            damage =0;
        }else if (in == 1) {
            cout << "you decided to "<< fightOptions[in][0] <<" \n you delt 7 damage\n";
            damage = 7;
        }
        else if (in == 2) {
            cout << "you decided to "<< fightOptions[in][0] <<" \n you delt 6 damage\n";
            damage = 6;
        }else {
            cout << "you decided to "<< fightOptions[in][0] <<" \n you delt 5 damage\n";
            damage = 5;
        }
    }else {
        if (opSheild || distant) {
            cout << "you decided to "<< fightOptions[in][0] <<" \n your opponet's sheild was up or they are to far away. \n you are now close enough for next time\n";
            damage = 0;
        }else if (in == 1) {
            cout << "you decided to "<< fightOptions[in][0] <<" \n you delt 7 damage\n";
            damage = 7;
        }else {
            cout << "you decided to "<< fightOptions[in][0] <<" \n you delt 5 damage\n";
            damage = 5;
        }
        distant = false;
    }
    return damage;
}