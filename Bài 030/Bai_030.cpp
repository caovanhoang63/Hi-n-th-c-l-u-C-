#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 2;
	while (i <= 2*n)
	{
		s += (float)1 / i;
		i+=2;
	}
	cout << "S(" << n << ") = " << s;
	return 0;
}