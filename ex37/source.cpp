//Nhap so nguyen duong n. Tim so nguyen duong m lon nhat: 1 + 2 + ... + m < n
#include <iostream>
using namespace std;
int main() {
	label:
	int n, m, sum = 0;
	cout << "Nhap n: "; cin >> n;
	if (n == 1) { cout << "Khong tim thay"; return 0; }
	if (n <= 0) { cout << "Error: n > 0.\n"; goto label; }
	for (int i = 1; sum < n; i++) {
		sum += i;
		cout << i;
		if (sum + i + 1 < n) cout << " + ";
		else { m = i; break; }
	}
	cout << " = " << sum << " < " << n << endl;
	cout << "m = " << m;
	return 0;
}