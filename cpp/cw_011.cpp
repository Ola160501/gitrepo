//1)
//Napisz program, który oblicza sumę wszystkich liczb parzystych dwucyfrowych

#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    for(int i=10; i<=98; i++)
        suma += i;

    cout<<suma;
}
