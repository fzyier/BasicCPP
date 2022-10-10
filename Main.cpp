#include <iostream>
#include <string>

using namespace std;

int main() {
	int task;
	cout << "1 - number of digits    2 - number of sum\n3 - arithmetic average  4 - number of 0s\n0 - exit" << endl;
	cout << "Enter: ";
	do {
		cin >> task;
		switch (task) {
		case 1:
		{
			string input;
			cout << "Enter a number: ";
			cin >> input;
			cout << input.length();
			break;
		}
		case 2:
		{
			int input, m;
			int x = 0;
			cout << "Enter a number: ";
			cin >> input;
			while (input > 0)
			{
				m = input % 10;
				x += m;
				input /= 10;
			};

			cout << x;
			break;
		}
		case 3: {
			int input, m; 
			float b = 0;
			int x = 0;
			cout << "Enter a number: ";
			cin >> input;
			int h = to_string(input).length();
			while (input > 0)
			{
				m = input % 10;
				x += m;
				input /= 10;
				b += 1;
			};
			cout << (float)x/h;
			break;
		}
		case 4: {
			string input;
			int a = 0;
			cout << "Enter a number: ";
			cin >> input;
			for (int i = 0; i < input.length(); i++) {
				if (input[i] == '0')
					a++;
			}
			cout << a;
			break;
		}
		default:
			cout << "Nope!" << endl;
			break;
		}
	} while (task != 0);
	return 0;
}