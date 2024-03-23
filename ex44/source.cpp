//In ra tam giac can dac va rong, tao tu cac dau "*" voi do cao n
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: "; cin >> n;
	//Tam giac can dac
	for (int i = 1; i <= n; i++) {
		cout << setw(2 * (n - i) + 1) << "*";
		for (int j = 1; j < 2 * i - 1; j ++) {
			cout << setw(2) << "*";
		}
		cout << endl;
	}
	//Tam giac can rong
	for (int i = 1; i <= n; i++) {
		cout << setw(2 * (n - i) + 1) << "*";
		if (i != 1 && i != n) {
			for (int j = 1; j < 2 * i - 2; j++) {
				cout << setw(2) << " ";
			}
			cout << setw(2) << "*" << endl;
		}
		else {
			for (int j = 1; j < 2 * i - 1; j++) {
				cout << setw(2) << "*";
			}
			cout << endl;
		}
	}
	return 0;
}