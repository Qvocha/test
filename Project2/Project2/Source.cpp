#include <iostream>
using namespace std;
int main() {
	int a, b, s;
	cin >> a >> b;
	if (!(0 <= b && b <= a))
		cout << "Íåâåðíûå äàííûå";
	else {
		s = a;
		int k = 1;
		while (s >= b) {
			s = s - k;
			k = k + 1;
		}
		cout << k - 1;
	}
	return 0;
}
