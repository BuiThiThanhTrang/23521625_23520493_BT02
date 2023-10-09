#include <iostream>
using namespace std;

float FtoC(float);

int main()
{
	float c;
	cout << "Nhap gia tri do F: ";
	cin >> c;

	cout << "C: " << FtoC(c);
	return 0;
}

float FtoC(float ff)
{
	return 5 * (ff - 32) / 9;
}