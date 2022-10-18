#include <iostream>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Nhap x3: ";
	cin >> x3;
	cout << "Nhap y3: ";
	cin >> y3;
	float a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float p = (a + b + c)/2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich tam giac la " << s;
	return 0;
}