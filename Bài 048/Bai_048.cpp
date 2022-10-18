#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	float s = x;
	while (i<=n)
	{
		s *= (x + i);
		i++;
	}
	cout << "S(" << n << ") = " << s;
	return 0;
}