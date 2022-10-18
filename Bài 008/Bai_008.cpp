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
	float p = 2 * 3.14 * r * sin(3.14 / n);
	cout << "Chu vi cua da giac: " << p;
	return 0;
}