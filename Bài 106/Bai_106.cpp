#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float sin = x;
	float t = x;
	float m = 1;
	int dau = 1;
	float e = 1;
	int i = 2;
	while (abs(e)>=pow(10,-6))
	{
		t *= x*x;
		m *= i * (i + 1);
		dau = -dau;
		e = dau * t / m;
		sin = sin + e;
		i += 2;
	}
	cout << "sin(" << x << ") = " << sin;
	return 0;
}