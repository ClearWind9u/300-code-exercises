//Nhap so kW da tieu thu, tinh so tien dien phai tra
#include <iostream>
using namespace std;
int main() {
	int kW, money;
	cout << "Nhap chi so kW tieu thu: "; cin >> kW;
	if (kW <= 100) money = kW * 500;
	else if (kW <= 250) money = 100 * 500 + (kW - 100) * 800;
	else if (kW <= 350) money = 100 * 500 + 150 * 800 + (kW - 250) * 1000;
	else money = 100 * 500 + 150 * 800 + 100 * 1000 + (kW - 350) * 1500;
	cout << "Chi phi: " << money;
	return 0;
}