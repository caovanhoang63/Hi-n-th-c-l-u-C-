#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	float at = 1;
	int i = 2; 
	float ahh;
	while (i<=n)
	{
		ahh = (at * at + 2) /( 2*at);
		at = ahh;
		i++;
	}
	cout << "a(" << n << ") = " << ahh;
	return 0;
}