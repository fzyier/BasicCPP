#include "../HeaderLib/Header.h"

int MaxSingleArray(int arr[],int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
double MaxSingleArray(double arr[], int size) {
	double max = 0;
	for (int i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
char MaxSingleArray(char arr[], int size) {
	char max = 0;
	for (int i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}