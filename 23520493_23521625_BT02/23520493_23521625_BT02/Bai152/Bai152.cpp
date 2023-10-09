#include <iostream>
using namespace std;

bool KtDang3m(int);

int main()
{
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;

	if (KtDang3m(n) == true)
		cout << "\nGia tri " << n << " co dang 3^m.";
	else
		cout << "\nGia tri " << n << " khong co dang 3^m.";
	return 0;
}

bool KtDang3m(int nn)
{
	for (int t = nn; t > 1; t = t / 3)
	{
		int du = t % 3;
		if (du != 0)
			return false;
	}
	return true;
}