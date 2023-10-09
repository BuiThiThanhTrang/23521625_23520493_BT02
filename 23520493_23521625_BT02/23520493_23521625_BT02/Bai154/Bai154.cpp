#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int&);
void DayMuaDa(int);

int main()
{
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;

	cout << "Day mua da: ";
	DayMuaDa(n);

	return 0;
}

void DayMuaDa(int nn)
{
	int ahh = nn;
	cout << ahh;
	while (ahh != 1)
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2;
		else
			ahh = 3 * ahh + 1;
		cout << setw(6) << ahh;
	}
}