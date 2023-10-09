#include <iostream>
using namespace std;

float DienTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh duong tron: ";
	cin >> r;

	cout << "Dien tich duong tron: " << DienTich(r);
	return 0;
}

float DienTich(float rr)

{
	return rr * rr * 3.14;
}