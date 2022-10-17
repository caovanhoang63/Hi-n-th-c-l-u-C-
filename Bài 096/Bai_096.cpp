#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;
	int t=1 ;
	while (i <= n)
	{	
		t *= i;
		s = sqrt(t + s);
		i++;
	}
	cout << "S(" << n << ") =" << s;
	return 0;
}