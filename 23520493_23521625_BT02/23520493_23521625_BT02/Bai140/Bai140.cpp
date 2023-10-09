#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int GiaiBacHai(float, float, float, float&, float&);

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	float c;
	cout << "Nhap c: ";
	cin >> c;

	float x1, x2;
	switch (GiaiBacHai(a, b, c, x1, x2))
	{
	case 0: 
		cout << "Phuong trinh vo nghiem.";
		break;
	case 1: 
		cout << "Phuong trinh co nghiem kep";
		cout << "\nx1=" << setw(10) << setprecision(3) << x1;
		break;
	case 2: 
		cout << "Phuong trinh co 2 nghiem.";
		cout << "\nx1=" << setw(10) << setprecision(3) << x1;
		cout << "\nx2=" << setw(10) << setprecision(3) << x2;
		break;
	}
	return 0;
}

int GiaiBacHai(float aa, float bb, float cc,float& x1,float& x2)
{
	float delta = bb * bb - 4 * aa * cc;
	if (delta <= 0)
	{
		if (delta == 0)
		{
			x1 = x2 = -bb / (2 * aa);
			return 1;
		}
		return 0;
	}
	x1 = (-bb + sqrt(delta)) / (2 * aa);
	x2 = (-bb - sqrt(delta)) / (2 * aa);
	return 2;
}