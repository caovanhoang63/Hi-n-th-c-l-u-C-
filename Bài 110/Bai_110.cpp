#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float pi = 0;
	int i = 1;
	int dau = 1;
	float e = 1;
	while (e>=pow(10,-6))
	{
		e = (float)4 / i;
		pi += e * dau;
		dau = -dau;
		i += 2;
	}
	
	cout << "pi = " << pi;
	return 0;
}