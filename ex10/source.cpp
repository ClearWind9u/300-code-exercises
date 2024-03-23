//Kiem tra so SIN (Canadian Social Insurance Number) co hop le hay khong
#include <iostream>
#include <string>
using namespace std;
int main() {
	while(1)
	{
		unsigned int SIN, s1 = 0, s2 = 0, check;
		cout << "SIN (0 de thoat): "; cin >> SIN;
		if (SIN == 0) break;
		for (int i = 1; i < 10; i++) {
			if (i == 1) check = SIN % 10;
			else if (i % 2) s1 += SIN % 10;
			else {
				s2 += (SIN % 10 * 2) / 10 + (SIN % 10 * 2) % 10;
			}
			SIN = SIN / 10;
		}
		if (!((check + s1 + s2) % 10) && !SIN) cout << "SIN hop le!\n";
		else cout << "SIN khong hop le!\n";
	}
	return 0;
}