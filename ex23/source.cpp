//Tim cac so hoan hao nho hon so nguyen duong n cho truoc
#include <iostream>
using namespace std;
bool check(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) { sum += i; }
	}
	if (sum == n) return true;
	else return false;
}
int main() {
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Cac so hoan hao nho hon " << n << ": ";
	for (int i = 3; i < n; i++) {
		if (check(i)) cout << i << " ";
		if (i == n - 1) cout << endl;
	}
	return 0;
}