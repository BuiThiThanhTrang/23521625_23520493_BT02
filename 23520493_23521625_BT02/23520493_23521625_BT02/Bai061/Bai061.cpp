#include <iostream>
using namespace std;
int DemSoLe(int);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "So luong cac chu so le cua " << n << " la:" << DemSoLe(n);
    return 0;
}
int DemSoLe(int nn)
{
    int dem = 0;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 != 0)
            dem = dem + 1;
        t = t / 10;
    }
    return dem;
}
