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
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		i++;
	}
	cout << "T(" << n << ") = " << t;
	return 0;
}