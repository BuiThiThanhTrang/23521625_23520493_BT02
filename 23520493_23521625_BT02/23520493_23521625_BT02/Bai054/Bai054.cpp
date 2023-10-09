#include <iostream>
#include <iomanip>
using namespace std;

int TongUocChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nTong uoc so chan: " << TongUocChan(n);
	return 0;
}

int TongUocChan(int nn)
{
	int s = 0;
	for (int i = 2; i <= nn; i += 2)
		if (nn % i == 0)
			s = s + i;
	return s;
}