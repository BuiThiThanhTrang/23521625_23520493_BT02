#include <iostream>
#include <iomanip>
using namespace std;

int TichUocLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nTich uoc so: " << TichUocLe(n);
	return 0;
}

int TichUocLe(int nn)
{
	int t = 1;
	for (int i = 1; i <= nn; i += 2)
		if (nn % i == 0)
			t = t * i;
	return t;
}