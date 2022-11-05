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
int TaskArraySize(T* A, const int sizeA, T* B, const int sizeB) {
	int taskArraySize = 0;

	for (int i = 0; i < sizeA; i++) {
		bool dublicate = false;
		bool contain = false;

		for (int j = i + 1; j < sizeA; j++)
			if (A[i] == A[j])
				dublicate = true;

		if (dublicate == false)
			for (int k = 0; k < sizeB; k++)
				if (A[i] == B[k])
					contain = true;

		if (contain == false && dublicate == false)
			taskArraySize++;

	}

	return taskArraySize;
}

template <typename T>
void TaskArray(T* A, const int sizeA, T* B, const int sizeB) {
	int taskArraySize = 0;

	// Calculating the size of the array
	taskArraySize += TaskArraySize(A, sizeA, B, sizeB);
	taskArraySize += TaskArraySize(B, sizeB, A, sizeA);

	T* taskArray = InitializeArray<T>(taskArraySize);

	// Adding elements to the array
	for (int k = 0; k < taskArraySize;) {
		for (int i = 0; i < sizeA; i++) {
			bool dublicate = false;
			bool contain = false;

			for (int j = i + 1; j < sizeA; j++)
				if (A[i] == A[j])
					dublicate = true;

			if (dublicate == false)
				for (int j = 0; j < sizeB; j++)
					if (A[i] == B[j])
						contain = true;

			if (contain == false && dublicate == false) {
				taskArray[k] = A[i];
				k += 1;
			}

		}
		for (int i = 0; i < sizeB; i++) {
			bool dublicate = false;
			bool contain = false;

			for (int j = i + 1; j < sizeB; j++)
				if (B[i] == B[j])
					dublicate = true;

			if (dublicate == false)
				for (int j = 0; j < sizeA; j++)
					if (B[i] == A[j])
						contain = true;

			if (contain == false && dublicate == false) {
				taskArray[k] = B[i];
				k += 1;
			}

		}
	}

	OutputArray(taskArray, taskArraySize);

	delete[] taskArray;
}