#include "dane.h"

void jesliParzyste(int& pa, int a) {
     pa += ((a % 2) - 1) * -1;
}
void liczIloczyn(int& il, int a) {
     il *= a;
}
void liczSuma(int& sum, int a) {
     sum += a;
}
int main()
{
    naglowek();
    int varable ,parzyste = 0,iloczyn = 1, suma = 0;
    while(true){
        cout << "Podaj liczbe" <<endl;
        cin >> varable;
        if (varable == 0) break;
        jesliParzyste(parzyste ,varable);
        liczIloczyn(iloczyn ,varable);
        liczSuma(suma , varable);
    }
    cout << "Parzyste: " << parzyste;
    cout << " Suma: " << suma;
    cout << " Iloczyn: " << iloczyn;
    stop();
}

