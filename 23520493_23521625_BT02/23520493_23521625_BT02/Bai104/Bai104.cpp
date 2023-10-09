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
	float s = 0;
	float e = 0.5;
	int i = 1;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		e = (float)1 / (i * (i + 1));
		s = s + e;
		i = i + 1;
	}
	return s;
}