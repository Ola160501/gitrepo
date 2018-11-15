/*
 * znaki.cpp
 */

#include <iostream>
#include <string.h>

using namespace std;


bool palindrom(char w[], int roz) {
    bool czyPal = true;
    for (int i = 0; i < roz / 2; i++) {
        if (w[i] != w[roz-1-i]) {
            czyPal=false;
            break;
        }
    }
    return czyPal;
}

int main(int argc, char **argv)
{
    const int rozmiar = 20; 
    char tekst[rozmiar]; 
    cout << "Podaj wyraz lub zdanie: ";
    cin.getline(tekst, rozmiar);
    if (palindrom(tekst, strlen(tekst)))
        cout << "Palindrom!";
    else
        cout << "Nie palindrom";
    return 0;
}



