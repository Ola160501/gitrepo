
/*
 * sortowanie.cpp
 */


#include <iostream>
using namespace std;

void wypelnij_los(int tab[], int roz) {
    srand(time(NULL));  
    for(int i = 0; i < roz; i++) {
        tab[i] = rand() % 101;
    }
}

void drukuj(int tab[], int roz) {
    for(int i = 0; i < roz; i++) {
        cout << tab[i] << " ";
    }
}

void zamien(int &a, int &b) {
    int tmp = a;  // zmienna pomocnicza
    a = b;
    b = tmp;
}

void zamien2(int tab[], int i) {
    int tmp = tab[i];
    tab[i] = tab[i+1];
    tab[i+1] = tmp;
}

void sort_bubble(int tab[], int n) {
    cout << "\nSortowanie bąbelkowe\n";
    int licznik = 0;
    for (int j = n - 1; j > 0 ; j--) {
        for(int i = 0; i < j; i++) {
            licznik++;
            if (tab[i] > tab[i+1])
                //zamien(tab[i], tab[i+1]);
                zamien2(tab, i);
        }
}

void sort_selection(int tab[], int n) {
    cout << ;
    int i, j, el;
    for (i = 1; i < n; i++) {
        k = i-1; 
        while (k.= i + 1; j < n; j++){
            if (tab[k+1]} < tab[k])
                k--;
        }


int main(int argc, char **argv)
{
	int roz = 20;
    int tab[roz];
    wypelnij_los(tab, roz);
    drukuj(tab, roz);
    cout <, endl << endl
	return 0;
}

