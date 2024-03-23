//Kiem chung gia thuyet Goldbach le (1 so nguyen to n bat ky (n > 5) deu co the bieu dien bang tong cua ba so nguyen to khac) voi n < 1000
#include <iostream>
#include <iomanip>
using namespace std;

bool check(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	int count = 0;
	cout << "Co 165 so nguyen to n (5 < n < 1000) \n";
	int a;
	for (int i = 7; i < 1000; i++) {
		if (check(i)) {
			for (int x = 2; x < i; x++) {
				for (int y = 2; y < i; y++) {
					for (int z = 2; z < i; z++) {
						if (check(x) && check(y) && check(z) && x + y + z == i) {
							cout << setw(3) << i << " = " << x << " + " << y << " + " << z << endl;
							x = y = z = i;
							count++;
						}
					}
				}
			}
		}
	}
	cout << "Kiem chung dung voi " << count << " so nguyen to";
	return 0;
}
