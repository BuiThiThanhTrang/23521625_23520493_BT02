#include <iostream>
#include <iomanip>
using namespace std;

int SoDauTien(int);
int DemDauTien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "\nSo luong chu so dau tien cua gia tri " << n << " la: ";
	cout << DemDauTien(n);
	return 0;
}


int SoDauTien(int nn)
{
	int dt = nn;
	while (dt >= 10)
	{
		dt = dt / 10;
	}
	return dt;
}

int DemDauTien(int nn)
{
	int dt = SoDauTien(nn);
	int dem = 0;
	for (int t = nn; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv == dt)
			dem++;
	}
	return dem;
}