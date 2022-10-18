#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	int ahh;
	while (i<=n)
	{
		tt *= 3;
		pp *= 7;
		ahh = 5 * at + 2 * tt - 6*pp + 12;
		i++;
		at = ahh;

	}
	cout << "a(" << n << ") = " << ahh;
	return 0;
}