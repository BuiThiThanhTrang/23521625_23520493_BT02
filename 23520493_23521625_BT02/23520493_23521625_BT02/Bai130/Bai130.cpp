#include <iostream>
using namespace std;

bool ktTamGiac(float, float, float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float y;
	cout << "Nhap y: ";
	cin >> y;

	float z;
	cout << "Nhap z: ";
	cin >> z;

	if (ktTamGiac(x, y, z) == true)
		cout << "Co ton tai tam giac";
	else
		cout << "Khong ton tai tam giac";
	return 0;
}

bool ktTamGiac(float xx, float yy, float zz)
{
	if (xx + yy > zz && xx + zz > yy && yy + zz > xx)
		return true;
	else
		return false;
}