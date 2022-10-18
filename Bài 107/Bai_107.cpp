#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float cos = 1;
	float t = 1;
	float m = 1;
	int dau = 1;
	float e = 1;
	int i = 2;
	while (abs(e) >= pow(10, -6))
	{
		t *= x * x;
		m *= i * (i -1);
		dau = -dau;
		e = dau * t / m;
		cos += e;
		i += 2;
	}
	cout << "cos(" << x << ") = " << cos;
	return 0;
}