#include <iostream>
#include <ctime>

// Template Functions
template <typename T>
T* AllocationDynamicMemory(int size) {
	return new T[size];
}

template <typename T>
void InitializingArray(T* arr, int size) {
	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 10;
}

template <typename T>
void OutputArray(T* arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << "  ";
	std::cout << std::endl;
}

template <typename T>
void DeleteArray(T* arr) {
	delete[] arr;
}

template <typename T>
T *AddEndElement(T *arr, int size) {
	T* newArr = AllocationDynamicMemory<int>(size);
	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];

	newArr[size-1] = 99;

	return newArr;
}

template <typename T>
void ReplaceElement(T* arr, int size, int index, T el) {
	for (int i = 0; i < size; i++)
		if (i == index)
			arr[i] = el;
}

template <typename T>
T* DeleteElement(T* arr, int size, int index) {
	T* newArr = AllocationDynamicMemory<int>(size);
	for (int i = 0, k = 0; i < size; i++, k++) {
		if (i == index)
			k += 1;
		newArr[i] = arr[k];
	}
	return newArr;
}