#include <iostream>
#include <iomanip>
using namespace std;

int ktNhuan(int);
void LietKe(int, int);

int main()
{
    int x;
    cout << "Nhap x: ";
    cin >> x;

    int y;
    cout << "Nhap y: ";
    cin >> y;

    LietKe(x, y);
    return 0;
}

int ktNhuan(int nn)
{
    if (nn % 4 == 0 && nn % 100 != 0)
        return 1;
    if (nn % 400 == 0)
        return 1;
    return 0;
}

void LietKe(int xx, int yy)
{
    cout << "Cac nam nhuan: ";
    bool flag = false;
    for (int n = xx; n <= yy; n++)
    {
        if (ktNhuan(n) == 1)
        {
            cout << setw(8) << n;
            flag = true;
        }
    }
    if (flag == false)
        cout << "khong co.";
}