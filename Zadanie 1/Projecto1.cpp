
#include "dane.h"

void zeruj(int& a, int& b, int& c) {

    a = 0, b = 0, c = 0;

}
int main()
{
    naglowek();
    int a = 3, b = 3, c = 2;
    cout << a << "," << b << "," << c << endl;
    zeruj(a, b, c);
    cout << a << "," << b << "," << c << endl;
    stop();
}

