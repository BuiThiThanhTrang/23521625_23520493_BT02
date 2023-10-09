#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Process(int);

int main()
{
	int n;
	Nhap(n);

	cout << "Xuat day gia tri: ";
	Process(n);

	return 0;
}

void Nhap(int& nn)
{
	cout << "Nhap gia tri n: ";
	cin >> nn;
}

void Process(int nn)
{
	int t = 1;
	for (int i = 1; i <= nn; i++)
	{
		t = t * i;
		cout << setw(10) << t;
	}
}