#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int att = -1;
	int at = 3;
	int i = 2;
	int ahh;
	while (i<=n)
	{
		ahh = 5 * at + 6*att;
		att = at;
		at = ahh;
		i++;
	}
	cout << "a(" << n << ") = " << ahh;
	return 0;
}