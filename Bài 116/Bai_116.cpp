#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int att = 1;
	int at = 2;
	int i = 2;
	int ahh;
	while (i<=n)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	cout << "a(" << n << ") = " << ahh;
	return 0;
}