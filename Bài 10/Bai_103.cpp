#include <iostream>
using namespace std;
int main()
{
	float s = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s += e;
		i+=2;
	}
	cout << "S(" << i << ")=" << s;
	return 0;
}