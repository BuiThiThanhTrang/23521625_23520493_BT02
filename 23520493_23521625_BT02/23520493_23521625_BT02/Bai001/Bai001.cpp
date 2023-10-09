#include <iostream>
using namespace std;//

void Nhap(float &, float &);
void Xuat(float, float);
float KhoangCach(float, float, float, float);

int main()
{
	float x1, y1;
	cout << "\nNhap diem thu nhat:\n";
	Nhap(x1, y1);
	
	float x2, y2;
	cout << "\nNhap diem thu hai:\n";
	Nhap(x2, y2);
	
	cout << "Toa do diem thu nhat" << endl;
	Xuat(x1, y1);
	cout << "Toa do diem thu hai" << endl;
	Xuat(x2, y2);

	float d = KhoangCach(x1, y1, x2, y2);
	cout << "Khoang cach giua 2 diem = " << d << endl;
	return 0;
}

void Nhap(float & x, float & y)
{
	cout << "Nhap x: ";
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
