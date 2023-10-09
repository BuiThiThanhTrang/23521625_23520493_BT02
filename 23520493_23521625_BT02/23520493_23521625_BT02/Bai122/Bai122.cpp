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
	float at = 1;
	float bt = 1;
	int i = 2;
	float ahh;
	float bhh;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}

int TinhBn(int nn)
{
	float at = 1;
	float bt = 1;
	int i = 2;
	float ahh;
	float bhh;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}