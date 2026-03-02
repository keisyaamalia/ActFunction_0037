#include <iostream>
using namespace std;

int r;

void input()
{
    cout << "Masukkan jari jari :";
    cin >> r;
}
float luaslingkaran(int r)
{
    return 3.14159 * r * r;
}

void output()
{
    cout << "Luasnya : " << luaslingkaran(r);
}
int main()
{
    input();
    output();
}