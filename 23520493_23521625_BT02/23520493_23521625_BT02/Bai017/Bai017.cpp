#include <iostream>
using namespace std;

float TinhX11(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^11 = " << TinhX11(x);
	return 0;
}

float TinhX11(float xx)
{
	float x2 = xx * xx;
	float x3 = x2 * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x11 = x8 * x3;
	return x11;
}