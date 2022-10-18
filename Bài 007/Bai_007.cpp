#include <iostream>
using namespace std;
int main()
{
	float f;
	cout << "Nhap do F: ";
	cin >> f;
	float c = 5 * (f - 32) / 9;
	cout << "Nhiet do C: " << c;
	return 0;
}