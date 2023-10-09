#include <iostream>
using namespace std;

int GiaiThua(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nKet qua: " << GiaiThua(n);
	return 0;
}

int GiaiThua(int nn)
{
	int t = 1;
	for (int i = 1; i <= nn; i++)
		t = t * i;
	return t;
}