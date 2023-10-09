#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

float TheTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh hinh cau: ";
	cin >> r;

	cout << "The tich hinh cau: " << TheTich(r);
	return 0;
}

float TheTich(float rr)
{
	return 4 * M_PI * rr * rr * rr / 3;
}