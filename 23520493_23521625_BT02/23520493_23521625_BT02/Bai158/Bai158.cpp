#include <iostream>
#include <iomanip>
using namespace std;

int LonNhat(int);
int DemLonNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nSo luong chu so lon nhat cua gia tri " << n << " la: ";
	cout << DemLonNhat(n);
	return 0;
}

int LonNhat(int nn)
{
	nn = abs(nn);
	int lc = nn % 10;
	for (int t = nn; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
	}
	return lc;
}

int DemLonNhat(int nn)
{
	nn = abs(nn);
	int ln = LonNhat(nn);
	int dem = 0;
	for (int t = nn; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv == ln)
			dem++;
	}
	return dem;
}