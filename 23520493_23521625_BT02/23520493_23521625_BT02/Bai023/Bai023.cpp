#include <iostream>
using namespace std;

int HangChuc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so hang chuc cua " << n << "= " << HangChuc(n);
	return 0;
}

int HangChuc(int nn)
{
	return (nn / 10) % 10;
}