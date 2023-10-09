#include <iostream>
using namespace std;

float TinhX15(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^15 = " << TinhX15(x);
	return 0;
}

float TinhX15(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x15 = x16 / xx;
	return x15;
}