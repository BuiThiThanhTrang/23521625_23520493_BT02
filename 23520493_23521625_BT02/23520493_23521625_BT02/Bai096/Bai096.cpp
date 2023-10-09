#include <iostream>
#include <cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: " << Tong(n);
	return 0;
}
float Tong(int nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = sqrt(t + s);
		i = i + 1;
	}
	return s;
}