#include <iostream>
using namespace std;

int ucln(int, int);
int bcnn(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	
	int b;
	cout << "\nNhap b: ";
	cin >> b;

	cout << "\nBoi chung nho nhat cua " << a << " va " << b << " la: ";
	cout << bcnn(a, b);
	return 0;
}

int ucln(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return (m + n);
}

int bcnn(int aa, int bb)
{
	return abs(aa * bb) / ucln(aa, bb);
}