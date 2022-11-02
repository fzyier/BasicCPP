#include <iostream>
#include <ctime>
#include <iomanip>

// Generation Single Array
inline void Random(int arr[], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 200;
}
inline void Random(double arr[], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + (double)(rand()) / ((double)(RAND_MAX / (200 - 10)));
}
inline void Random(char arr[], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 200;
}
// Generation Double Array
inline void Random(int arr[][10], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		for(int j = 0; j < size; j++)
			arr[i][j] = 1 + rand() % 200;
}
inline void Random(double arr[][10], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			arr[i][j] = 1 + (double)(rand()) / ((double)(RAND_MAX / (200 - 10)));
}
inline void Random(char arr[][10], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			arr[i][j] = 1 + rand() % 200;
}
// Generation Triple Array
inline void Random(int arr[][10][10], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			for(int k = 0; k < size; k++)
				arr[i][j][k] = 1 + rand() % 200;
}
inline void Random(double arr[][10][10], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			for (int k = 0; k < size; k++)
				arr[i][j][k] = 1 + (double)(rand()) / ((double)(RAND_MAX / (200 - 10)));
}
inline void Random(char arr[][10][10], int size) {
	srand((unsigned)time(0));
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			for (int k = 0; k < size; k++)
				arr[i][j][k] = 1 + rand() % 200;
}