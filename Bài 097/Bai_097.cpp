#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	float x;
	cout << "Nhap x:";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		s = sqrt(t + s);
		i++;
	}
	cout << "S(" << n << ") =" << s;
	return 0;
}