#include "..\HeaderLib\Header.h"

inline int MaxTripleArray(int arr[][10][10], int size) {
	int max = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			for(int k = 0; k < size; k++)
				if (max < arr[i][j][k])
					max = arr[i][j][k];
	return max;
}
inline double MaxTripleArray(double arr[][10][10], int size) {
	double max = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			for (int k = 0; k < size; k++)
				if (max < arr[i][j][k])
					max = arr[i][j][k];
	return max;
}
inline char MaxTripleArray(char arr[][10][10], int size) {
	char max = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			for (int k = 0; k < size; k++)
				if (max < arr[i][j][k])
					max = arr[i][j][k];
	return max;
}