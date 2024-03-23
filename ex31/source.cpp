//In bang cuu chuong tu 2 den 9
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 2; j <= 9; j++) {
			cout << "|" << j << "x" << setw(2) << i << "= " << setw(2) << j * i;
		}
		cout << "|" << endl;
	}
	return 0;
}