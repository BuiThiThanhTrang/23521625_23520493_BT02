#include <iostream>
#include <cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	cout << "Ket qua: " << Tong(n);
	return 0;
}

float Tong(int nn)
{
	float s = 0;
	float e = 4;
	int dau = 1;
	int i = 1;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		e = (float)4 /i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}