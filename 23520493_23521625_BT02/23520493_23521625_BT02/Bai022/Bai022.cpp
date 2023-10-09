#include <iostream>
using namespace std;

int DonVi(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so don vi cua " << n << "= " << DonVi(n);
	return 0;
}

int DonVi(int nn)
{
	return nn % 10;
}