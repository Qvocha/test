#include <iostream>
using namespace std;
int main() {
	int a, b, s, k;
	cin >> a >> b;
	if (!(0 <= b && b <= a))
		cout << "Неверные данные";
	else {
		s = a;
		k = 1;
		while (s >= b) {
			s = s - k;
			k = k + 1;
		}
		cout << k - 1;
	}
	return 0;
}