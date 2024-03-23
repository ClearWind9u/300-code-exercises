//Viet tro choi bao - da - keo
#include <iostream>
using namespace std;
int main() {
	char player, computer; int random, pp = 0, cp = 0;
	srand(time(NULL));
	while (1) {
		cout << "Nhap ky tu (b-d-k), ky tu khac de thoat: "; cin >> player;
		if (player != 'b' && player != 'd' && player != 'k') break;
		random = rand() % 3;
		if (random == 0) computer = 'b';
		if (random == 1) computer = 'd';
		if (random == 2) computer = 'k';
		cout << "Computer: " << computer << endl;
		if (player == 'b') { if (computer == 'k') cp++; if (computer == 'd') pp++; }
		else if (player == 'd') { if (computer == 'b') cp++; if (computer == 'k') pp++; }
		else { if (computer == 'd') cp++; if (computer == 'b') pp++; }
		cout << "Ty so human - computer: " << pp << " - " << cp << endl;
	}
	return 0;
}