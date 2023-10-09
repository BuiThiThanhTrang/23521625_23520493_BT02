#include<iostream>
#include<iomanip>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nTong cac gia tri la: ";
	cout << fixed << setw(10) << setprecision(2) << Tong(n);
	return 0;
}
float Tong(int nn)
{
	float s = 1;
	for (int i = 1; i <= nn; i++)
		s = 1 / (1 + s);
	return s;
}