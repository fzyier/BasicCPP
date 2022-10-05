#include <iostream>

using namespace std;

int main() {
	int z = 0, y = -1;
	int start, end, x;
	srand(time(NULL));
	x = 1 + rand() % 500;
	cout << "Try to guess a number 1 - 500" << endl;
	cout << "============ 0 - exit ============\n";
	start = time(0);
	while (y != x) {
		z++;
		cout << "Enter: ", cin >> y;
		if (y == 0)
			exit(0);
		if (y != x) {
			cout << "Nope!\n";
			(y > x) ? cout << "My number is less!\n" : cout << "My number is more!\n";
		}
	}
	end = time(0);
	cout << "YOU'R RIGHT!!!" << endl;
	cout << "You tried to guess " << z << " times...\n";
	cout << "Time lost: " << end - start << " seconds" << endl;
	return 0;
}