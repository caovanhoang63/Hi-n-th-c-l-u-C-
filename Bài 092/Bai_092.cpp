#include <iostream>
using namespace std;
int main()
{
	float x;
	int n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float t = x;
	int m = 1;
	int a = -1;
	float s = 1;
	int i = 1;
	while (i <= 2 * n+1)
	{	
		s += a * t / m;
		i += 2;
		t *= x * x;
		m *= i * (i - 1);
		a = -a;
	}
	cout << "tong cua day so S(" << x << "," << n << ") la: " << s;
	return 0;
}