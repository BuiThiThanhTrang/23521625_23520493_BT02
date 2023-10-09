#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float Tong();

int main()
{
	cout << "Ket qua: " << Tong();
	return 0;
}

float Tong()
{
	float s = 4 - ((float)2 / 4) - ((float)1 / 5) - ((float)1 / 6);
	float t = 1;
	float e = 1;
	int i = 1;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		t = t * 16;
		e = ((((float)4 / (8 * i + 1)) - ((float)2 / (8 * i + 4)) - ((float)1 / (8 * i + 5)) - ((float)1 / (8 * i + 6))) / t);
		s = s + e;
		i = i + 1;
	}
	return s;
}