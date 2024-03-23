//Viet ham chen tung phan tu mot vao mang so nguyen sao cho mang luon giu thu tu giam
//Dung ham nay de luu cac gia tri nhap thanh mot mang co thu tu giam. Nhap cho den khi Ctrl+Z, xuat mang de kiem tra
#include <iostream>
using namespace std;

void add(int** A, int capacity, int x) {
	int check = 0;
	if (capacity == 0) (*A)[0] = x;
	else {
		for (int i = 0; i < capacity; i++) {
			if (x >= (*A)[i]) {
				check = 1;
				for (int j = capacity; j > i; j--) {
					(*A)[j] = (*A)[j - 1];
				}
				(*A)[i] = x;
				break;
			}
			if (i == capacity - 1 && !check) (*A)[i + 1] = x;
			check = 0;
		}
	}
}

int main() {
	int n_, *A, count, capa = 0;
	string n;
	cout << "Nhap khong qua 100 phan tu (Ctrl + Z de dung)\n";
	A = (int*)calloc(100, sizeof(int));
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
		add(&A, capa, n_);
		capa++;
	}
	for (int i = 0; i < capa; i++) {
		cout << A[i] << " ";
	}
	return 0;
}