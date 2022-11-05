#include <iostream>
#include <ctime>

// Functions Declaration
template<typename T>
T* InitializeArray(const int size);

template<typename T>
void OutputArray(T* arr, const T size);

template <typename T>
void RandomFillArray(T* arr, const T size);

template <typename T>
void TaskArray(T* A, const int sizeA, T* B, const int sizeB);

// Template Functions
template<typename T>
T* InitializeArray(const int size) {
	return new T[size];
}

template<typename T>
void OutputArray(T* arr, const T size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << "   ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

template <typename T>
void RandomFillArray(T* arr, const T size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + std::rand() % 10;
	}
}

template <typename T>
void TaskArray(T* A, const int sizeA, T* B, const int sizeB) {
	int taskArraySize = 0;

	for (int i = 0; i < sizeA; i++) {

		for (int j = i + 1; j < sizeA; j++)
			if (A[i] == A[j] && A[i] != NULL)
				A[j] = NULL;

		for (int j = 0; j < sizeB; j++)
			if (A[i] == B[j])
				A[i] = NULL;

	}

	for (int i = 0; i < sizeA; i++)
		if (A[i] != NULL)
			taskArraySize++;

	T* taskArray = InitializeArray<T>(taskArraySize);

	for (int i = 0, j = 0; i < sizeA; i++) {
		if (A[i] != NULL) {
			taskArray[j] = A[i];
			j += 1;
		}
	}

	OutputArray(taskArray, taskArraySize);

	delete[] taskArray;
}