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
	for (int i = 2; i <= 2 * nn; i = i + 2)
		s = s + (float)1 / i;
	return s;
}