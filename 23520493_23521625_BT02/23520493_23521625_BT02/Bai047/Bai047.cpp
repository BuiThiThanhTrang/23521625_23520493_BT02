#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nKet qua: " << Tong(n);
	return 0;
}

float Tong(int nn)
{
	float s = 0;
	for (int i = 1; i <= nn; i++)
		s = s + sqrt(1 + (float)1 / (i * i) + (float)1 / ((i + 1) * (i + 1)));
	return s;
}