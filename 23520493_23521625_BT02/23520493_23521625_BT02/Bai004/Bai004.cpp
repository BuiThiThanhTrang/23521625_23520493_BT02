#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

float DienTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh hinh cau: ";
	cin >> r;

	cout << "Dien tich xung quanh hinh cau: " << DienTich(r);
	return 0;
}

float DienTich(float rr)
{
	return 4 * M_PI * rr * rr;
}