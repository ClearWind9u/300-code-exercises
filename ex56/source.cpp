//Nhap vao 1 so nguyen n co dau, in ra dang nhi phan va thap luc phan cua n
#include <iostream>
using namespace std;

void printBits(int x) {
	int size = sizeof(int) * 8;
	cout << x << " = ";
	while (--size >= 0) {
		putchar(((x >> size) & 1) + '0');
		if (size % 8 == 0) putchar(' ');
	}
	putchar('\n');
}
int main() {
	int n;
	cout << "Nhap n: "; cin >> n;
	printBits(n);
	cout << "Hex: " << uppercase << hex << n;
	return 0;
}