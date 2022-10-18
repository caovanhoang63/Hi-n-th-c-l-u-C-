#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 1;
	int i = 1;
	while (i<=n)
	{
		s *= (1 + (float)1 / (i * i));
		i++;
	}
	cout << "S(" << n << ") = " << s;
	return 0;
}