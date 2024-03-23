//Nhap n so tuy y, nhap cho den khi nhat Ctrl+Z
//Hay luu cac so nay thanh 1 tap hop chua cac phan tu co gia tri phan biet
#include <iostream>
using namespace std;
int main() {
	int n_, A[100], j = 0, check, count;
	string n;
	cout << "Nhap khong qua 100 phan tu (Ctrl + Z de dung)\n";
	while (cin >> n) {
		n_ = 0;
		if (n[0] == '^' && (n[1] == 'Z' || n[1] == 'z')) break;
		if (n[0] == '-') count = 1;
		else count = 0;
		for (int i = count; i < n.length(); i++) {
			n_ *= 10;
			n_ += n[i] - '0';
		}
		if (n[0] == '-') n_ = -n_;
		check = 0;
		for (int i = 0; i < j; i++) {
			if (A[i] == n_) { check = 1; break; }
		}
		if (!check) A[j++] = n_;	
	}
	cout << "Tap hop A: {";
	for (int i = 0; i < j; i++) {
		if (i == j - 1) cout << A[i] << "}\n";
		else cout << A[i] << ", ";
	}
	return 0;
}