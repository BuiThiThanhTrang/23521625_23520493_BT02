#include <iostream>
using namespace std;

float TinhX7(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^7 = " << TinhX7(x);
	return 0;
}

float TinhX7(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x7 = x6 * xx;
	return x7;
}