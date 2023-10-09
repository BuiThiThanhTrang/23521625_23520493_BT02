#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float DienTich(int, float);

int main()
{
	int n;
	cout << "Nhap so canh: ";
	cin >> n;

	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Dien tich da giac deu: " << DienTich(n, r);
	return 0;
}

float DienTich(int nn, float rr)
{
	return nn * rr * rr * sin(2 * M_PI / nn) / 2;
}