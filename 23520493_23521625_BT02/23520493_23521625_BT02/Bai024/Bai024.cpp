#include <iostream>
using namespace std;

int HangTram(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so hang tram cua " << n << "= " << HangTram(n);
	return 0;
}

int HangTram(int nn)
{
	return (nn / 100) % 10;
}