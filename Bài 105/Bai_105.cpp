#include <iostream>
using namespace std;
int main()
{
	float s = 0;
	float e = 1;
	int m = 0;
	int i = 1;
	while (e >= pow(10, -6))
	{	
		m += i;

		e = (float)1 / m;
		s += e;
		i++;
	}
	cout << "S(" << i << ")=" << s;
	return 0;
}