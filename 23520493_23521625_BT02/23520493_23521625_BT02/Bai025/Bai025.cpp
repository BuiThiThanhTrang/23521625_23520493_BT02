#include <iostream>
using namespace std;

void HoanVi(float &, float&);

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	cout << "\nTruoc hoan vi: ";
	cout << "\na: " << a;
	cout << "\nb: " << b;

	HoanVi(a, b);
	cout << "\nSau hoan vi: ";
	cout << "\na: " << a;
	cout << "\nb: " << b;
	return 0;
}

void HoanVi(float& aa, float& bb)
{
	float temp = aa;
	aa = bb;
	bb = temp;
}