#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dv = (n /10)%10;
	cout << "Chu so hang chuc cua " << n << " la : " << dv;
	return 0;
}