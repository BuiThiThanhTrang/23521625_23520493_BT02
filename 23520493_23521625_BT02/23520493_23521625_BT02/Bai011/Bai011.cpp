#include <iostream>
using namespace std;

void Nhap(float&, float&);
void Xuat(float, float);
float KhoangCach(float, float, float, float);
float DienTich(float, float, float, float, float, float);

int main()
{
	float x1, y1;
	cout << "Nhap diem A:";
	Nhap(x1, y1);

	float x2, y2;
	cout << "Nhap diem B:";
	Nhap(x2, y2);

	float x3, y3;
	cout << "Nhap diem C:";
	Nhap(x3, y3);

	cout << "Toa do diem A" << endl;
	Xuat(x1, y1);
	cout << "Toa do diem B" << endl;
	Xuat(x2, y2);
	cout << "Toa do diem C" << endl;
	Xuat(x3, y3);

	cout << "Dien tich tam giac: " << DienTich(x1, y1, x2, y2, x3, y3) << endl;
	return 0;
}

void Nhap(float& x, float& y)
{
	cout << "\nNhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void Xuat(float x, float y)
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

float KhoangCach(float xP, float yP, float xQ, float yQ)
{
	return sqrt((xQ - xP) * (xQ - xP) + (yQ - yP) * (yQ - yP));
}

float DienTich(float xA, float yA, float xB, float yB, float xC, float yC)
{
	float a = KhoangCach(xA, yA, xB, yB);
	float b = KhoangCach(xB, yB, xC, yC);
	float c = KhoangCach(xA, yA, xC, yC);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
