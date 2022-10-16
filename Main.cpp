#include <iostream>
#include <iostream>

using namespace std;

int DegreeOfNumber(int num, int degree) {
	return pow(num, degree);
}
int main() {
	cout << DegreeOfNumber(1, 5);

	return 0;
}