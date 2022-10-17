#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	cout << "Uoc la:";
	while (i <= n)
	{
		if (n % i == 0)
			cout<<" " << i;
		i = i + 1;
	}
	return 1;
}