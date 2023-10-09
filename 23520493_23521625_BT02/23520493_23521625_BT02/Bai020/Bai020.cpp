#include <iostream>
using namespace std;

float TinhX14(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^14 = " << TinhX14(x);
	return 0;
}

float TinhX14(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x8 = x4 * x4;
	float x14 = x8 * x6;
	return x14;
}