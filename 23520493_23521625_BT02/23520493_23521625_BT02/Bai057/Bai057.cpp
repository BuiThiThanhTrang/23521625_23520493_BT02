#include <iostream>
#include <iomanip>
using namespace std;

int TongUocNho(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nTong uoc so nho hon " << n << ":" << TongUocNho(n);
	return 0;
}

int TongUocNho(int nn)
{
	int s = 0;
	for (int i = 1; i < nn; i++)
		if (nn % i == 0)
			s = s + i;
	return s;
}