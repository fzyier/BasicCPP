#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int size;
	string f = "";
	string s = "";
	cout << "Enter size:";
	cin >> size;
	for (int i = 0; i < size; i++)
		f += "*";
	for (int i = 0; i < size; i++)
		s += "_";
	cout << f + s + f + s + f + s + f + s << endl;
	cout << f + s + f + s + f + s + f + s << endl;
	cout << f + s + f + s + f + s + f + s << endl;
	cout << s + f + s + f + s + f + s + f << endl;
	cout << s + f + s + f + s + f + s + f << endl;
	cout << s + f + s + f + s + f + s + f << endl;
	return 0;
}