//Chuong trinh cho biet thi sinh dau hay rot va tong diem dat duoc trong 1 ky thi tuyen
#include <iostream>
using namespace std;
int main() {
	double dc, d1, d2, d3, diem = 0;
	int dt;
	string kv;
	cout << "Nhap diem chuan: "; cin >> dc;
	cout << "Nhap diem 3 mon thi: "; cin >> d1 >> d2 >> d3;
	cout << "Nhap khu vuc (A, B, C, X): "; cin >> kv;
	cout << "Nhap doi tuong (1, 2, 3, 0): "; cin >> dt;
	if (kv == "A") diem += 2;
	else if (kv == "B") diem += 1;
	else if (kv == "C") diem += 0.5;
	if (dt) diem += 2.5;
	else if (dt == 2) diem += 1.5;
	else if (dt == 3) diem += 1;
	diem += d1 + d2 + d3;
	if (diem >= dc) cout << "Dau ";
	else cout << "Rot ";
	cout << "[" << diem << "]";
	return 0;
}