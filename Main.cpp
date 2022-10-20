#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
void Func(T p_d, T p_i) {
	cout << setprecision(p_i) << p_d;
}

int main() {
	double x;
	int y;
	cout << "Enter double:";
	cin >> x;
	cout << "Enter int:";
	cin >> y;

	Func<double>(x, y);
	return 0;
}