#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dv = (n / 100) % 10;
	cout << "Chu so hang tram cua " << n << " la : " << dv;
	return 0;
}