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
	float s = 1;
	float t = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		t = t * xx;
		m = m * i;
		e = t / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}