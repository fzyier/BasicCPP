#include <iostream>
#include <ctime>

// Template Functions
template<typename T>
T* InitializeArray(const int size) {
	return new T[size];
}

template<typename T>
void OutputArray(T* arr, const T size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 1)
			std::cout << arr[i] << "   ";
		else
			continue;
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

bool isPrime(int num){
	if (num == 1)
		return true;
	if (num <= 3){
		return num > 1;
	}
	else if (num % 2 == 0 || num % 3 == 0){
		return false;
	}
	else{
		for (int i = 5; i * i <= num; i += 6){
			if (num % i == 0 || num % (i + 2) == 0){
				return false;
			}
		}
		return true;
	}
}

template <typename T>
T *TaskArray(T* arr, int size) {
	int taskSize = 0;
	for (int i = 0; i < size; i++) {
		if (isPrime(arr[i]) == true)
			arr[i] = 0;
		else
			taskSize++;
	}

	T* taskArray = InitializeArray<T>(taskSize);

	for (int i = 0, k = 0; i < size; i++) {
		if (arr[i] != 0) {
			taskArray[k] = arr[i];
			k += 1;
		}
		else 
			continue;
	}

	return taskArray;
}