#include "dane.h"
int toNum8Bit(int bite[8]){
    int num = 0;
    for (int i = 0; i < 8; i++) {
        num += bite[i] * pow(2,i);
    }
    return num;

}
int main()
{
    naglowek();
    int bite[8];
    cout << "Wprowadz 8 bitów od najstarszego" << endl;
    for (int i = 0; i <= 7; i++) {
        int temp;
        cin >> temp;
        temp = temp > 1 ? 1 : temp;
        temp = temp < 0 ? 0 : temp;
        bite[i] = temp;
   }
    cout << "Twoja liczba: " << toNum8Bit(bite) << endl;
    stop();
}
