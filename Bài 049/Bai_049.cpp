#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1; 
	cout << "Cac uoc so cua " << n << " la ";
	while (i<=n)
	{
		if (n % i == 0)
			cout << i << " ";
		i++;
	}
	return 0;
}