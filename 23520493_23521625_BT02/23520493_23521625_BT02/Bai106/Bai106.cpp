#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

float Tong(float);

int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;

	cout << "Ket qua: " << Tong(x);
	return 0;
}

float Tong(float xx)
{
	float xxx = (xx * (M_PI)) / 180;
	float s = xxx;
	float t = xxx;
	int m = 1;
	int dau = -1;
	float e = xxx;
	int i = 3;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		t = t * xxx * xxx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}