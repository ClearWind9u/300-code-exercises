//Tao ngau nhien mang 2 chieu vuong co kich thuoc 4x4 voi cac phan tu ngau nhien trong doan [-100, 100]
//Sap xep lai cac phan tu cua mang 2 chieu tren sao cho moi dong tang tu trai sang phai va moi cot tang tu tren xuong duoi
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	srand(time(NULL));
	int a[4][4], tmp;
	int* b = &a[0][0];
	cout << "Mang goc:\n";
	for (int i = 0; i < 4; i++, cout << endl) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = rand() % 201 - 100;
			cout << setw(5) << a[i][j] << " ";
		}
	}
	cout << "Mang sau khi sap xep:\n";
	for (int i = 0; i < 16; i++) {
		for (int j = i + 1; j < 16; j++) {
			if (b[i] > b[j]) {
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 4; i++, cout << endl) {
		for (int j = 0; j < 4; j++) {
			cout << setw(5) << a[i][j] << " ";
		}
	}
	return 0;
}