#include <iostream>
using namespace std;

float TinhX9(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^9 = " << TinhX9(x);
	return 0;
}

float TinhX9(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8 * xx;
	return x9;
}