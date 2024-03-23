//Doi n (n > 5) so tien ra 3 menh gia 1000, 2000, 5000 sao cho loai tien 2000 chiem hon 1 nua so to tien phai doi it nhat
#include <iostream>
using namespace std;
int main() {
	int n, x, y, z, t1, t2, t5, sum;
	cout << "Nhap n (nghin dong, n > 5): "; cin >> n;
	x = y = z = t1 = t2 = t5 = 0;
	sum = n;
	for (z = 0; z < n / 5; z++) {
		for (y = (n - z * 5) / 2; y > 0; y--) {
			x = n - y * 2 - z * 5;
			if (y > x + z && x + y + z < sum) {
				sum = x + y + z;
				t1 = x; t2 = y; t5 = z;
			}
		}
	}
	cout << "( " << t1 << ", " << t2 << ", " << t5 << " ): " << sum;
	return 0;
}