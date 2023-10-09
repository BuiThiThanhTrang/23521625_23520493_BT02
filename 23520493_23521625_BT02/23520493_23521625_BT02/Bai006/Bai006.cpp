#include <iostream>
using namespace std;

float CtoF(float);

int main()
{
	float c;
	cout << "Nhap gia tri do C: ";
	cin >> c;

	cout << "F: " << CtoF(c);
	return 0;
}

float CtoF(float cc)
{
	return 9 * cc / 5 + 32;
}