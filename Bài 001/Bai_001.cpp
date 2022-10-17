#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2;
	cout << "nhap x1: ";
	cin >> x1;
	cout << "nhap y1: ";
	cin >> y1;
	cout << "nhap x2: ";
	cin >> x2;
	cout << "nhap y2: ";
	cin >> y2;
	float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout <<"khoang cach giua 2 diem la: "<< d;
	return 0;
}