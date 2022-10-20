#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T Squere(T a, T b, T x, T c) {
	return a*pow(x,2)+b*x+c;
}

template <typename T>
T Linear(T a, T b, T x) {
	return a*x+b;
}

int main() {
	cout << Squere<double>(1.2, 2.3, 3.4, 4.5);

	return 0;
}