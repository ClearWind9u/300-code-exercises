//Liet ke, dem va tinh tong cac uoc so cua so nguyen duong n
#include <iostream>
using namespace std;
int main() {
	int n, count = 0, sum = 0;
	cout << "Nhap n: "; cin >> n;
	cout << "Cac uoc so: ";
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
			count++;
			sum += i;
		}
		if (i == n) cout << endl;
	}
	cout << "Co " << count << " uoc so, tong la: " << sum << endl;
	return 0;
}