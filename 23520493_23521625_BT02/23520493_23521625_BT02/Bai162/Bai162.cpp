#include <iostream>
#include <iomanip>
using namespace std;

bool ktGiamDan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktGiamDan(n) == true)
		cout << "Gia tri " << n << " giam tu trai sang phai.";
	else
		cout << "Gia tri " << n << " khong giam tu trai sang phai.";
	return 0;
}

bool ktGiamDan(int nn)
{
	bool flag = true;
	for (int t = nn; t >= 10; t = t / 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc < dv)
			flag = false;
	}
	return flag;
}