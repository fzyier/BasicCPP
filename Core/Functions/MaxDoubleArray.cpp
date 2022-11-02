#include "..\HeaderLib\Header.h"

inline int MaxDoubleArray(int arr[][10], int size) {
	int max = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (max < arr[i][j])
				max = arr[i][j];
	return max;
}
inline double MaxDoubleArray(double arr[][10], int size) {
	double max = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (max < arr[i][j])
				max = arr[i][j];
	return max;
}
inline char MaxDoubleArray(char arr[][10], int size) {
	char max = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (max < arr[i][j])
				max = arr[i][j];
	return max;
}