#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so canh: ";
	cin >> n;
	float r;
	cout << "Nhap r: ";
	cin >> r;
	float s = n * r * r * sin(2 * 3.14 / n) / 2;
	cout << "Dien tich cua da giac la " << s;
	return 0;
}