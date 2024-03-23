//Nhap vao nam Duong lich, xuat ra nam Am lich tuong ung va nam Duong lich ke tiep co cung nam Am lich
#include <iostream>
using namespace std;
int main() {
	int nam, a;
	string can[10] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
	string chi[12] = { "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui" };
	cout << "Nhap nam: "; cin >> nam;
	a = nam % 60 % 12;
	cout << nam << " - " << can[(a + (nam % 60 / 12) * 2) % 10] << " " << chi[a] << endl;
	cout << nam + 60 << " - " << can[(a + (nam % 60 / 12) * 2) % 10] << " " << chi[a] << endl;
	return 0;
}