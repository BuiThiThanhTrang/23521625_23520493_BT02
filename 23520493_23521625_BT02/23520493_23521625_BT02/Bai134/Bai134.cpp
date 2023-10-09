#include <iostream>
using namespace std;

bool ktDangThuc(float, float, float);

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

	
	if (ktDangThuc(x, y, z) == true)
		cout << "Dang thuc dung";
	else
		cout << "Dang thuc sai";

	return 0;
}

bool ktDangThuc(float xx, float yy, float zz)
{
	if (xx <= yy && yy <= zz)
		return true;
	else
		return false;
}

bool ktDangThucAd(float xx, float yy, float zz)
{
	return (xx <= yy && yy <= zz);
}