//Mot mau lat (pattern) thuong duoc dinh nghia duoi dang 1 ma tran nhi phan
//Gia su mau lat tren dung de lat kin ma tran A (20 x 20)
//Xuat ma tran B (8 x 12) la ma tran con của A, co goc tren trai nam tai phan tu A[3][4]
#include <iostream>
using namespace std;
int main() {
	int p[4][6] = { { 0, 1, 0, 1, 0, 0 },
					{ 1, 0, 0, 0, 1, 0 },
					{ 1, 0, 0, 0, 1, 0 },
					{ 0, 1, 0, 1, 0, 0 } };
	for (int i = 0; i < 8; i++, cout << endl) {
		for (int j = 0; j < 12; j++) {
			p[(i + 3) % 4][(j + 4) % 6] ? cout << "*" : cout << " ";
		}
	}
	return 0;
}