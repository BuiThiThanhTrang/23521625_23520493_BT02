#include <iostream>
#include <iomanip>
using namespace std;

void LietKeUocSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	LietKeUocSoLe(n);
	return 1;
}

void LietKeUocSoLe(int nn)
{
	cout << "\nUoc so le: ";
	for (int i = 1; i <= nn; i = i + 2)
		if (nn % i == 0)
			cout << setw(8) << i;
}