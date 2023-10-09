#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

float ChuVi(float);

int main()
{
	float r;
	cout << "Nhap ban kinh duong tron: ";
	cin >> r;

	cout << "Chu vi duong tron: " << ChuVi(r);
	return 0;
}

float ChuVi(float rr)
{
	return 2 * M_PI * rr;
}