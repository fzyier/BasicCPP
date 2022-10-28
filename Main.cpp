#include <iostream>

using namespace std;
void PerfectNum(int num) {
	int ultra = 0;
	for (int i = 1; i <= 17; i++) {
		if (ultra == num) {
			cout << "Perfect Number!";
			return;
		}
		if (num % i == 0)
			ultra += i;
	}
	cout << "Not Perfect Number!";
}
int main() {
	int num;
	cin >> num;
	PerfectNum(num);
	return 0;
}