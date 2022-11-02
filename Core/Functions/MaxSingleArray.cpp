#include "../HeaderLib/Header.h"

inline int MaxSingleArray(int arr[],int size) {
	int max = 0;
	for (int i = 0; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}
inline double MaxSingleArray(double arr[], int size) {
	double max = 0;
	for (int i = 0; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}
inline char MaxSingleArray(char arr[], int size) {
	char max = 0;
	for (int i = 0; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}