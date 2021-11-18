#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Ucgenin a kenarinin uzunlugunu girin: ";
    cin >> a;
    cout << "Ucgenin hipotenus uzunlugunu girin: ";
    cin >> c;
    cout << "\n\n";
    b = sqrt((c * c) - (a * a)); //bA2=cA2-aA2
    cout << "Ucgenin b kenarinin uzunlugu: " << b;
    cout << "\n";
    cout << "Ucgenin Alani: " << (a * b) / 2 << endl;
}