/*
 * petle_cw01.cpp

 */

#include <iostream>
 
using namespace std;

void zad01() {
    int s = 0;
    for(int i = 10; i < 100; i++){
        if (i % 2 == 0)
        s = s + i;
    }
    cout << "suma:" << s << endl;
}

