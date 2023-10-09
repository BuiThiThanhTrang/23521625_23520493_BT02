#include <iostream>
#include <iomanip>
using namespace std;

void LietKeUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nUoc so: ";
	LietKeUocSo(n);
	return 0;
}

void LietKeUocSo(int nn)
{
	for (int i = 1; i <= nn; i++)
		if (nn % i == 0)
			cout << setw(8) << i;
}