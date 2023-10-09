#include <iostream>
using namespace std;

float TinhX12(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x12 = " << TinhX12(x);
	return 0;
}

float TinhX12(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x8 * x4;
	return x12;
}