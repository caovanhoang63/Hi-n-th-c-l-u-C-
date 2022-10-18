#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float s = 4 - (float)2 / 4 - (float)1 / 5 - (float)1 / 6;
	int t = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t *= 16;
		e = ((float)4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6)) / t;
		s += e;
		i++;
	}
	cout <<"pi = "<< s;
	return 0;
}