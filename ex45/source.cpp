//Voi n (n < 5) , in ra 2 tam giac doi dinh bang so, tang theo cot tu 1 den 2n - 1
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	label:
	cout << "Nhap n (n < 5): "; cin >> n;
	if (n >= 5) { cout << "Error! n < 5. "; goto label; }
	for (int i = 1; i <= 2 * n - 1; i++, cout << endl) {
		for (int j = 1; j <= 2 * n - 1; j++) {
			if ((j >= i && j >= 2 * n - i) || (j <= i && j <= 2 * n - i)) cout << j << " ";
			else cout << "  ";
		}
	}
	return 0;
}