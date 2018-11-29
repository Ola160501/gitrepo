/*
 * horner.cpp
 * 
 * Copyright 2018  <>
 * 
 * W(x) = 2x^3 + 3x^2 + 5x + 4 => 6 mnożeń + 3 dodawania
 * W(x) = x (2x^2 + 3x + 5) + 4
 * W(x) = x (x (2x + 3) + 5) + 4 => 3 mnożenia + 3 dodawania
 *
 */
#include <iostream>
using namespace std;

void drukujw(int stopien, float tbwsp[] {
    int i = 0;
    for(i = 0; i < st; i++) {
        cout << tbwsp[i] << "x^" << st-i << " + ";
    }
    cout << tbwsp[i] << endl;
}

int main(int argc, char **argv)
{
    int stopien = 0;
    float x = 0;
    cout << "Podaj stopień wielomianu: ";
    cin >> stopien;
    float *tbwsp;  // wskaźnik
    tbwsp = new float [stopien+1];
    for (int i=0; i <= stopien; i++) {
        cout << "Podaj współczynnik przy potędze " << stopien-i << ": ";
        cin >> tbwsp[i];
    }
    
    cout << "Podaj argument: ";
    cin >> x;
    
    cout << "Wartość wielomianu o postaci: "
    drukujw(stopien, tbwsp);
    
    
    return 0;
}



