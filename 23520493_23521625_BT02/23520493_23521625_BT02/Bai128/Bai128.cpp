#include <iostream>
using namespace std;

void TangDan(int&, int&);
void HoanVi(int&, int&);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	cout << "Thu tu ban dau: ";
	cout << "\n Bien a: " << a;
	cout << "\n Bien b: " << b;

	TangDan(a, b);
	cout << "\n Thu tu tang dan: ";
	cout << "\n Bien a: " << a;
	cout << "\n Bien b: " << b;
	return 0;
}

void HoanVi(int& aa, int& bb)
{
	int temp = aa;
	aa = bb;
	bb = temp;
}

void TangDan(int& aa, int& bb)
{
	if (aa > bb)
		HoanVi(aa, bb);
}