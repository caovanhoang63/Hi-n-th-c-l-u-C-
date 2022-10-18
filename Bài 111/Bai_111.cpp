#include <iostream>
using namespace std;
int main()
{
	float pi = 3;
	int i = 2;
	int dau = 1;
	float e = 1;
	while (abs(e)>=pow(10,-6))
	{
		e = (float)dau * 4 / (i * (i + 1) * (i + 2));
		dau = -dau;
		pi += e;
		i += 2;
	}
	cout << "pi = " << pi;
	return 0;
}