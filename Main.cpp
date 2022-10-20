#include <iostream>
#include <iomanip>

using namespace std;

template <typename T,typename T1>
void Func(T p_d, T1 p_i) {
	cout << setprecision(p_i) << p_d;
}

int main() {
	double x;
	int y;
	cout << "Enter double:";
	cin >> x;
	cout << "Enter int:";
	cin >> y;

	Func<double, int>(x, y);
	return 0;
}