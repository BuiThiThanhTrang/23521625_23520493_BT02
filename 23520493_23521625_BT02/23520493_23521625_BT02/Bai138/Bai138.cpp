#include <iostream>
using namespace std;

float Tinhf(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout <<"Gia tri cua ham so: "<< Tinhf(x);
	return 0;
}

float Tinhf(float xx)
{
	if (xx >= 0)
		if (xx <= 1)
			return 5 * xx - 7;
		else
			return (2 * xx * xx * xx) + (5 * xx * xx) - (8 * xx) + 3;
	else
		return (-2 * xx * xx * xx) + (6 * xx) + 9;
}