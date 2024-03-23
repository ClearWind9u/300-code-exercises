//Tinh tong S voi n cho truoc
//Neu n chan: S = 2 + 4 + ... + n
//Neu n le: S = 1 + 3 + ... + n
#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	cout << "Nhap n: "; cin >> n;
	if (n % 2) {
		for (int i = 1; i <= n; i += 2) sum += i;
	}
	else for (int i = 2; i <= n; i += 2) sum += i;
	cout << "S = " << sum << endl;
	return 0;
}