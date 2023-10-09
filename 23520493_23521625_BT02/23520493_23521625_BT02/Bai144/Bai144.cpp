#include<iostream>
#include <cmath>
using namespace std;

bool ktNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	if (ktNguyenTo(n) == true)
		cout << n << " la so nguyen to";
	else
		cout << n << " khong la so nguyen to";
	return 0;
}

bool ktNguyenTo(int nn)
{
	int dem = 0;
	for (int i = 1; i <= nn; i++)
		if (nn % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}