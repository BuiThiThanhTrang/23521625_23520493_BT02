#include <iostream>
#include <iomanip>
using namespace std;

int TongUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nTong uoc so: " << TongUocSo(n);
	return 0;
}

int TongUocSo(int nn)
{
	int s = 0;
	for (int i = 1; i <= nn; i++)
		if (nn % i == 0)
			s = s + i;
	return s;
}