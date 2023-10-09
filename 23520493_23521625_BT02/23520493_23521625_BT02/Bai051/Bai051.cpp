#include <iostream>
#include <iomanip>
using namespace std;

int TichUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nTich uoc so: " << TichUocSo(n);
	return 0;
}

int TichUocSo(int nn)
{
	int t = 1;
	for (int i = 1; i <= nn; i++)
		if (nn % i == 0)
			t = t * i;
	return t;
}