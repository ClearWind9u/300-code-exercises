//Thay the dau "?" boi 4 dau + - * / de bieu thuc sau co gia tri bang 36:
// ((((1 ? 2) ? 3) ? 4) ? 5) ? 6
#include <iostream>
using namespace std;

float f (float x, float y, int d) {
	switch (d) {
	case 0: return (float)(x + y);
	case 1: return (float)(x - y);
	case 2: return (float)(x * y);
	case 3: return (float)(x / y);
	}
	return 0;
}

int main() {
	int a, b, c, d, e;
	char sign[] = { '+', '-', '*', '/' };
	for (a = 0; a < 4; a++) {
		for (b = 0; b < 4; b++) {
			for (c = 0; c < 4; c++) {
				for (d = 0; d < 4; d++) {
					for (e = 0; e < 4; e++) {
						if (f(f(f(f(f(1, 2, a), 3, b), 4, c), 5, d), 6, e) == 36) {
							cout << "((((1 " << sign[a] << " 2) " << sign[b] << " 3) " << sign[c] << " 4) " << sign[d] << " 5) " << sign[e] << " 6 = 36\n";
						}
					}
				}
			}
		}
	}
	return 0;
}