#include <iostream>
using namespace std;

float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: " << Tong(x, n);
	return 0;
}

float Tong(float xx, int nn)
{
	float s = 1;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + t;
		i = i + 1;
	}
	return s;
}