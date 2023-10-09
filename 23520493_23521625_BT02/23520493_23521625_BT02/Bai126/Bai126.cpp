#include <iostream>
using namespace std;

int LonNhat(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	cout << "Gia tri lon nhat la: " << LonNhat(a, b);
	return 0;
}

int LonNhat(int aa, int bb)
{
	int lc = aa;
	if (lc < bb)
		lc = bb;
	return lc;
}
