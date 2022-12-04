#include "Header.h"

using namespace std;

void Initializing_surnames(string* surnames, int size) {
	for (size_t i = 0; i < size; i++) {
		cout << "Enter: ";
		cin >> surnames[i];
	}
}
void Initializing_print(string* surnames, int size) {
	for (size_t i = 0; i < size; i++) {
		cout << surnames[i] << " ";
	}
	cout << endl;
}
void SortArray(string* surnames, int size) {
	for (int i = 1; i < size; i++)
	{
		string temp = surnames[i];

		int j = i - 1;
		while (j >= 0 && temp.length() < surnames[j].length())
		{
			surnames[j + 1] = surnames[j];
			j--;
		}
		surnames[j + 1] = temp;
	}
}

int main() {
	int size = 5;
	string* surnames = new string[size];

	Initializing_surnames(surnames, size);
	Initializing_print(surnames, size);
	SortArray(surnames, size);
	Initializing_print(surnames, size);

}