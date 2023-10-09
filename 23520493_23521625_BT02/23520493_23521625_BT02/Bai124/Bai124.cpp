#include<iostream>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	cout << "\nKet qua: " << TinhAn(n);
	cout << "\nKet qua: " << TinhBn(n);
	return 0;
}

int TinhAn(int nn)
{
	float at = 2;
	float bt = 1;
	int i = 2;
	float ahh, bhh;
	while (i <= nn)
	{
		ahh = (at * at) + (2 * bt * bt);
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}

int TinhBn(int nn)
{
	float at = 2;
	float bt = 1;
	int i = 2;
	float ahh, bhh;
	while (i <= nn)
	{
		ahh = (at * at) + (2 * bt * bt);
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}