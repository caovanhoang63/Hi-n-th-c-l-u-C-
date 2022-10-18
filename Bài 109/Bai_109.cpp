#include <iostream>
using namespace std;
int main()
{
	float s = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e>pow(10,-6))
	{
		m *= i;
		e = (float)1 / m;
		s += e;
		i++;

	}
	cout << "e = " << s;
	return 0;
}