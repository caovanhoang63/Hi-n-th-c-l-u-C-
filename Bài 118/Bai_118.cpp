#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2;
	int i = 2;
	float ahh;
	while (i<=n)
	{
		ahh = (-9 * at - 24) / (5 * at + 13);
		at = ahh;
		i++;
	}
	cout << "a(" << n << ")=" << ahh;
	return 0;
}