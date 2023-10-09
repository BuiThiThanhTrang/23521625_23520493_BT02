#include <iostream>
using namespace std;

float LuyThua(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nKet qua: " << LuyThua(x, n);
	return 0;
}

float LuyThua(float xx, int nn)
{
	float t = 1;
	for (int i = 1; i <= nn; i++)
		t = t * xx;
	return t;
}