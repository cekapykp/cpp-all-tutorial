#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int secim;
    double i, j;
    cout << "Bir islem seciniz:" << endl;
    cout << "1- Karekok Alma" << endl;
    cout << "2- Us Alma" << endl;
    cout << "3- e Tabaninda Logaritma" << endl;
    cout << "4- 10 Tabaninda Logaritma" << endl;
    cin >> secim;
    if (secim == 1)
    {
        cout << "Sayiyi giriniz: ";
        cin >> i;
        cout << sqrt(i) << endl;
    }
    else if (secim == 2)
    {
        cout << "Taban sayisini giriniz: ";
        cin >> i;
        cout << "Us sayisini giriniz: ";
        cin >> j;
        cout << pow(i, j) << endl;
    }
    else if (secim == 3)
    {
        cout << "Sayiyi giriniz: ";
        cin >> i;
        cout << log(i) << endl;
    }
    else if (secim == 4)
    {

        cout << "Sayiyi giriniz: ";
        cin >> i;
        cout << log10(i) << endl;
    }
    else
        cout << "Hatali secim yaptiniz.";
    return 0;
}