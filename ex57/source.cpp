//Xac dinh bit parity chan cua n
#include <iostream>
using namespace std;
int main() {
	int n, count = 0, size;
	cout << "Nhap n: "; cin >> n;
	size = sizeof(int) * 8;
	while (--size >= 0) {
		if ((n >> size) & 1) count++;
	}
	cout << "Even parity bit = ";
	if (count % 2 == 0) cout << 0;
	else cout << 1;
	return 0;
}