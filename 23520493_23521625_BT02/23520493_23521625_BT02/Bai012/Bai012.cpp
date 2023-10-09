#include <iostream>
using namespace std;

float TinhX6(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^6 = " << TinhX6(x);
	return 0;
}

float TinhX6(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	return x6;
}