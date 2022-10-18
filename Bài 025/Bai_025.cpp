#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "Nhap gia tri a: ";
	cin >> a;
	cout << "Nhap gia tri b: ";
	cin >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << "Gia tri cua a = " << a << "\nGia tri cua b = " << b;
	return 0;
}