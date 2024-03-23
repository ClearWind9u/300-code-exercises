//Kiem tra n co la so nguyen to hay khong. Neu khong phai thi tim so nguyen to gan n nhat va nho hon n
#include <iostream>
using namespace std;
bool check(int x) {
	if (x < 2) return false;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) return false;
	}
	return true;
}
int main() {
	int n;
	cout << "Nhap n: "; cin >> n;
	if (check(n)) { cout << n << " la so nguyen to"; return 0; }
	else {
		cout << n << " khong la so nguyen to" << endl;
		for (int i = n; i > 0; i--) {
			if (check(i)) { cout << "So nguyen to be hon gan nhat: " << i; break; }
		}
		return 0;
	}
}