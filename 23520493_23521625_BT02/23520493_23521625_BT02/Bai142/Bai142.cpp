#include<iostream>
#include <cmath>
using namespace std;

int DaoNguoc(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	cout << "So dao nguoc cua " << n << " la " << DaoNguoc(n);
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

int DaoNguocAd(int nn)
{
	int dn = 0;
	for (int t = nn; t != 0; t = t / 10)
		dn = dn * 10 + t % 10;
	return dn;
}