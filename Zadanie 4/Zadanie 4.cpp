#include "dane.h"
int flip(int n ) {
    int x;
    for ( x = 0; n > 0; n /= 2) {
        x = 2 * x + n % 2;
    }
    return x;
    
    
}
int main()
{
    naglowek();
    int x;
    cin >> x;
    cout << flip(x) << endl;
    stop();

}

