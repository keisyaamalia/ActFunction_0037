#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "Masukkan Panjang :";
    cin >> panjang;
    cout << "Masukkan Lebar :";
    cin >> lebar;
}
int luaspersegi()
{
    return panjang * lebar;
}

void output()
{
    cout << "Hasilnya : " << luaspersegi();
}