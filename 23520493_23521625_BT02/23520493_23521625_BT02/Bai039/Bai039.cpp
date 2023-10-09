#include <iostream>
using namespace std;

float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nKet qua: " << Tich(n);
	return 0;
}

float Tich(int nn)
{
	float t = 1;
	for (int i = 1; i <= nn; i++)
		t = t * (1 + (float)1 / (i * i));
	return t;
}