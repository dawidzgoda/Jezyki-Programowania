
#include "dane.h"
unsigned long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return (fib(n - 2) + fib(n - 1)  );
}
int main()
{
    naglowek();
    int x;
    cout << "Wprowadz liczbe do ciągu" << endl;
    cin >> x;
    long int s = fib(x);
    cout << "Wynik: " << fib(x) << endl;
    stop();
}
