#include <iostream>
using namespace std;

int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nKet qua: " << Tong(n);
	return 0;
}

int Tong(int nn)
{
	int s = 0;
	for (int i = 1; i <= nn; i++)
		s = s + i * (i + 1);
	return s;
}