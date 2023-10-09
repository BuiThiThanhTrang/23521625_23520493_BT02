#include <iostream>
#include <iomanip>
using namespace std;

int DemUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nSo luong uoc so: " << DemUocSo(n);
	return 0;
}

int DemUocSo(int nn)
{
	int dem = 0;
	for (int i = 1; i <= nn; i++)
		if (nn % i == 0)
			dem = dem + 1;
	return dem;
}