#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t *= i;
		i++;
	}
	cout << "T(" << n << ") = " << t;
	return 0;
}