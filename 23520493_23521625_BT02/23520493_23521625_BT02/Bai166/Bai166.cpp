#include<iostream>
#include<iomanip>
using namespace std;

int kNhoNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nSo nguyen k nho nhat sao cho thoa man dieu kien: ";
	cout << kNhoNhat(n);
	return 0;
}

int kNhoNhat(int nn)
{
	int t = 1;
	int k = 1; 
	while (t * 2 <= nn)
	{
		t = t * 2;
		k++;
	}
	return k;
}