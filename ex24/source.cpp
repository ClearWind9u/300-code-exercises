//Nhap vao so tu nhien n. Tim so chu so, chu so dau, chu so cuoi, tong, so dao nguoc cua n
#include <iostream>
using namespace std;
int main() {
	unsigned long n, n_ = 0;
	int count = 0, head, tail, sum = 0;
	cout << "Nhap n: "; cin >> n;
	cout << n;
	tail = n % 10;
	while (n) {
		n_ = n_ * 10 + n % 10;
		sum += n % 10;
		if (n / 10 == 0) head = n;
		n = n / 10;
		count++;
	}
	cout << " co " << count << " chu so\n";
	cout << "Chu so cuoi cung la: " << tail << endl;
	cout << "Chu so dau tien la: " << head << endl;
	cout << "Tong cac chu so la: " << sum << endl;
	cout << "So  dao nguoc la: " << n_ << endl;
	return 0;
}