#include<iostream>
#include <cmath>
using namespace std;

int DaoNguoc(int);
bool ktDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	if (ktDoiXung(n) == true)
		cout << "So " << n << " la so doi xung";
	else
		cout << "So " << n << " khong la so doi xung";
	return 0;
}

int DaoNguoc(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}

bool ktDoiXung(int nn)
{
	if (nn == DaoNguoc(nn))
		return true;
	return false;
}