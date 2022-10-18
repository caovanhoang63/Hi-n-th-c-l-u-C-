#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 1;
	float e = 1;
	while (e>=pow(10,-6))
	{
		t *= x;
		m *= i;
		e = t / m;
		s += e;
		i++;
	}
	cout << "e^" << x << "=" << s;
	return 0;
}