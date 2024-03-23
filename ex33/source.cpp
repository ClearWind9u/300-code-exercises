//Tim tat ca so Armstrong (tong luy thua cac chu so cua no bang chinh no) co 3, 4 chu so 
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int arm, n, sum;
	cout << "So Armstrong co 3, 4 chu so: \n";
	for (int i = 100; i < 10000; i++) {
		if (i < 1000) {
			n = 3;
			sum = pow(i / 100, n) + pow(i % 100 / 10, n) + pow(i % 100 % 10, n);
			if (sum == i) cout << i << " ";
		}
		else {
			n = 4;
			sum = pow(i / 1000, n) + pow(i % 1000 / 100, n) + pow(i % 1000 % 100 / 10, n) + pow(i % 1000 % 100 % 10, n);
			if (sum == i) cout << i << " ";
		}
	}
	return 0;
}