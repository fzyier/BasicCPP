#include <iostream>
#include <ctime>

// Template Functions
template<typename T>
T* InitializeArray(const int size) {
	return new T[size];
}

template<typename T>
void OutputArray(T arr, const int size) {
	for (int i = 0; i < size; i++) {
			std::cout << arr[i] << "   ";
	}
	std::cout << std::endl;
}

template<typename T>
int CalcPosSize(T* ptrArr, int size) {
	int posSize = 0;
	for (int i = 0; i < size; i++)
		if (*(ptrArr + i) > 0)
			posSize+=1;
	return posSize;
}
template<typename T>
int CalcNegSize(T* ptrArr, int size) {
	int negSize = 0;
	for (int i = 0; i < size; i++)
		if (*(ptrArr + i) < 0)
			negSize += 1;
	return negSize;
}
template<typename T>
int CalcZerSize(T* ptrArr, int size) {
	int negSize = 0;
	for (int i = 0; i < size; i++)
		if (*(ptrArr + i) == 0)
			negSize += 1;
	return negSize;
}

template <typename T>
void RandomFillArray(T arr, const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = -10 + std::rand() % 20;
	}
}

template <typename T>
void TaskArrays(T* ptrArr, int size, T* posArr, T* negArr, T* zerArr) {
	for(int i = 0, k = 0; i < size; i++)
		if (*(ptrArr + i) > 0) {
			posArr[k] = *(ptrArr + i);
			k += 1;
		}
	for (int i = 0, k = 0; i < size; i++)
		if (*(ptrArr + i) < 0) {
			negArr[k] = *(ptrArr + i);
			k += 1;
		}
	for (int i = 0, k = 0; i < size; i++)
		if (*(ptrArr + i) == 0) {
			zerArr[k] = *(ptrArr + i);
			k += 1;
		}
}