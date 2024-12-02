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