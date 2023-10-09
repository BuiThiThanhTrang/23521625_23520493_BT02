#include <iostream>
#include <iomanip>
using namespace std;

int DemUocChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nSo luong uoc so chan: " << DemUocChan(n);
	return 0;
}

int DemUocChan(int nn)
{
	int dem = 0;
	for (int i = 2; i <= nn; i += 2)
		if (nn % i == 0)
			dem = dem + 1;
	return dem;
}