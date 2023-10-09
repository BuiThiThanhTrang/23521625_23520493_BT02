#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float ChuVi(int, float);

int main()
{
	int n;
	cout << "Nhap so canh: ";
	cin >> n;

	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Chu vi da giac deu: " << ChuVi(n, r);
	return 1;
}

float ChuVi(int nn, float rr)
{
	return 2 * nn * rr * sin(M_PI / nn);
}