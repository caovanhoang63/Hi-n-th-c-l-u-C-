#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x5 = x4 * x;
	float x11 = x5 * x6;
	cout << x << "^11 = " << x11;
	return 0;
}