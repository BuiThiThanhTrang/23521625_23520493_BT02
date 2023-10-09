#include <iostream>
using namespace std;

bool TonTaiChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (TonTaiChan(n) == true)
		cout << "So nguyen " << n << " co ton tai so chan";
	else
		cout << "So nguyen " << n << " khong ton tai so chan";
	return 0;
}

bool TonTaiChan(int nn)
{
	bool flag = false;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}