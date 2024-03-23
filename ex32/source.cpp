//Viet chuoi Hailstones sinh ra voi n nhap vao tu ban phim
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	string str;
	label:
	int n, count = 0;
	cout << "Nhap n: "; cin >> n;
	cout << setw(5) << n; count++;
	while (n != 1) {
		if (n % 2 == 0) n = n / 2;
		else n = 3 * n + 1;
		cout << setw(5) << n; count++;
		if (count % 6 == 0) cout << endl;
	}
	cout << endl << "Hailstones sinh duoc: " << count << endl;
	cout << "Tiep (y/n)? "; cin >> str;
	if (str == "y") goto label;
	else return 0;
}