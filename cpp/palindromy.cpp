/*
 * palindormy.cpp
 * 
  
 */


#include <iostream>

using namespace std;



int main(int argc, char **argv) 
{
	
    const int rozmiar = 20;
    char wyraz[20]; // 4! = 1 * 2 * 3 * 4 = 24
    cout << "POdaj wyraz lub zdanie: ";
    cin.getline(wyraz,rozmiar);
    cout << cin. gcount() << endl;
    cout << strlen(wyraz) << endl;
    if (palindrom(wyraz, strlen(wyraz)))
        cout << :Palindrom!";
    else
        cout << "Nie Palindrom!";
   
	return 0;



}
