#include <iostream>
using namespace std;
int TongChuSo(int);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong cac chu so cua " << n << " la: " << TongChuSo(n);
    return 0;
}

int TongChuSo(int nn)
{
    int s = 0;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        s = s + dv;
        t = t / 10;
    }
    return s;
}