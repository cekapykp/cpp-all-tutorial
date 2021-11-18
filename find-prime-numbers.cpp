#include <iostream>
using namespace std;
int main()
{
    // girilen sayi asal mı ?
    int sayi;
    int sayac = 0;
    cout << "Biri sayi giriniz : ";
    cin >> sayi;
    for (int j = 2; j < sayi; j++)
    {
        if (sayi % j == 0)
        {
            sayac++;
            break;
        }
    }
    if (sayac == 0)
    {
        cout << "Sayi asaldir";
    }
    else
    {
        cout << "Sayi asal degildir";
    }