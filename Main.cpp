#include <iostream>
#include <string>

using namespace std;

void Random(char arr[], int size) {
	srand((unsigned)time(0));

	for (size_t i = 0; i < size; i++)
		arr[i] = 48+(rand() % 10);
}

int Bulls(char arr[],char trueArray[], int size) {
	int arr0[10]{0,0,0,0,0,0,0,0,0,0};
	int arr1[10]{0,0,0,0,0,0,0,0,0,0};
	for (int i = 0; i < size; i++) {
		int num = 0;
		for (int j = 0; j < 10; j++) {
			if ((char)(j + 48) == arr[i]) {
				num++;
				arr0[j] += num;
			}

		}
	}

	for (int i = 0; i < size; i++) {
		int num = 0;
		for (int j = 0; j < 10; j++) {
			if ((char)(j + 48) == trueArray[i]) {
				num++;
				arr1[j] += num;
			}

		}
	}

	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr1[i] <= arr0[i] && arr1[i] != 0)
			num+=arr1[i];
	}
	return num;
}
int Cows(char arr[], char trueArray[], int size) {
	int num = 0;
	for (int i = 0; i < size; i++) {
		if (trueArray[i] == arr[i])
			num++;
	}
	return num;
}
void BullsAndCows(char trueArray[], int attempt = 0) {
	const int size = 5;
	char arr[size] = { NULL, NULL, NULL, NULL, NULL };

	cout << "Enter a number!" << endl;
	
	cout << "Enter: ";
	cin.getline(arr, 32);
	cout << Bulls(arr, trueArray, size) << "Bulls" << endl;
	cout << Cows(arr,trueArray, size) << "Cows" << endl;

	if (arr[0] != trueArray[0] || arr[1] != trueArray[1]
		|| arr[2] != trueArray[2] || arr[3] != trueArray[3]) {
		attempt++;
		return BullsAndCows(trueArray, attempt);
	}
	else {
		attempt++;
		cout << "You guessed for " << attempt << " attempts!";
	}
}

int main() {
	const int size = 4;
	char arr[size];
	Random(arr, size);

	BullsAndCows(arr);
	return 0;
}