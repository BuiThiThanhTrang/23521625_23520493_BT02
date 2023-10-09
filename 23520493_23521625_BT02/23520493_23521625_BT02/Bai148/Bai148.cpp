#include <iostream>
using namespace std;

bool KtToanChan(int);

int main()
{
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;

	if (KtToanChan(n) == true)
		cout << "\nGia tri " << n << " toan chu so chan.";
	else
		cout << "\nGia tri " << n << " khong toan chu so chan.";

	return 0;
}

bool KtToanChan(int nn)
{
	for (int t = nn; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			return false;
	}
	return true;
}