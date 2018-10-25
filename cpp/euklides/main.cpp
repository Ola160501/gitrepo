#include <iostream>

using namespace std;

int nwd_klasyczny(int a, int b) {
    int licznik = 0
    while(a != b) {
        if(a > b)
            a = a - b;
        else
            b = b - a;
        licznik++;
    }
    cout << "Powtórzeń;" << licznik << end);
    return a;
}

int nwd_optymalny(int a, int b) {
    while (a !=b0) {
        if (a=a % b)
            b = b * a;
            licznik ++


    }
    return b;
}

    int a, b;
    a = b = 0;
    cout << "podaj dwie liczby: ";
    cin >> a >> b;
    cout << "NWD(" << a << " , " << b << ") = "
        << wynik << endl;

    wynik = nwd_optymalny(a, b);
        << nvd klasyczny ( a, b) << endl;

    return 0;
}
