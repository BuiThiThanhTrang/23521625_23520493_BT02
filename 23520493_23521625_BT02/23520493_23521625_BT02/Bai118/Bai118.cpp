#include<iostream>
using namespace std;

float TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	cout << "Ket qua: " << TinhAn(n);
	return 0;
}

float TinhAn(int nn)
{
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = (float) ((-9.0 * at) - 24.0) / ((5.0 * at) + 13.0);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}