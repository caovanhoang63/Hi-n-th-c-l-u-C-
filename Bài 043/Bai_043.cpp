#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s += (float)1 / (i * (i + 1)*(i+2));
		i++;
	}
	cout << "S(" << n << ") = " << s;
	return 0;
}