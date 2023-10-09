#include <iostream>
#include <math.h>
using namespace std;

float Tich(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nKet qua: " << Tich(x, n);
	return 0;
}

float Tich(float xx, int nn)
{
	float s = 1;
	for (int i = 0; i <= nn; i++)
		s = s * (xx + i);
	return s;
}