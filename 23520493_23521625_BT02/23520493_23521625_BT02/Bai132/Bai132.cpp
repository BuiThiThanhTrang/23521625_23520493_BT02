#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float DienTich(float, float, float, float, float, float);
bool ktThuoc(float, float, float, float, float, float, float, float);

int main()
{
	float xA, yA;
	cout << "\nNhap diem thu nhat:\n";
	Nhap(xA, yA);

	float xB, yB;
	cout << "\nNhap diem thu hai:\n";
	Nhap(xB, yB);

	float xC, yC;
	cout << "\nNhap diem thu ba:\n";
	Nhap(xC, yC);

	float xM, yM;
	cout << "\nNhap diem M:\n";
	Nhap(xM, yM);

	if (ktThuoc(xA, yA, xB, yB, xC, yC, xM, yM) == true)
		cout << "M nam trong tam giac";
	else
		cout << "M nam ngoai tam giac";
	return 0;
}

void Nhap(float& x, float& y)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

float DienTich(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3) / 2;
}

bool ktThuoc(float xxA, float yyA, float xxB, float yyB, float xxC, float yyC, float xxM, float yyM)
{
	float SABC = DienTich(xxA, yyA, xxB, yyB, xxC, yyC);
	float SMAB = DienTich(xxM, yyM, xxA, yyA, xxB, yyB);
	float SMBC = DienTich(xxM, yyM, xxB, yyB, xxC, yyC);
	float SMAC = DienTich(xxM, yyM, xxA, yyA, xxC, yyC);
	float s = SMAB + SMBC + SMAC;
	if (s == SABC)
		return true;
	else
		return false;
}