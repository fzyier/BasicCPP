#include "../Core/HeaderLib/Header.h"
/*
I placed all functions in Header.h because of an error LNK2019.
I can't place functions in different header files because of this error.

Stackoverflow:
https://ru.stackoverflow.com/questions/523495/%D0%9E%D0%BF%D1%80%D0%B5%D0%B4%D0%B5%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5-%D1%88%D0%B0%D0%B1%D0%BB%D0%BE%D0%BD%D0%BD%D1%8B%D1%85-%D1%84%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%B9-%D0%B2-%D0%B4%D1%80%D1%83%D0%B3%D0%BE%D0%BC-%D1%84%D0%B0%D0%B9%D0%BB%D0%B5
https://ru.stackoverflow.com/questions/951207/%d0%9e%d0%bf%d1%80%d0%b5%d0%b4%d0%b5%d0%bb%d0%b5%d0%bd%d0%b8%d0%b5-%d0%b8-%d0%be%d0%b1%d1%8a%d1%8f%d0%b2%d0%bb%d0%b5%d0%bd%d0%b8%d0%b5-%d1%88%d0%b0%d0%b1%d0%bb%d0%be%d0%bd%d0%bd%d1%8b%d1%85-%d0%bc%d0%b5%d1%82%d0%be%d0%b4%d0%be%d0%b2
*/


int main() {
	srand((unsigned)time(0));
	const int size = 10;
	int staticArr[size];
	RandomFillArray(staticArr, size);
	OutputArray(staticArr, size);
	int *ptrArr = &staticArr[0];

	int posSize = CalcPosSize(ptrArr, size),
		negSize = CalcNegSize(ptrArr, size),
		zerSize = CalcZerSize(ptrArr, size);

	int* posArr = InitializeArray<int>(posSize);
	int* negArr = InitializeArray<int>(negSize);
	int* zerArr = InitializeArray<int>(zerSize);

	TaskArrays(ptrArr, size, posArr, negArr, zerArr);

	std::cout << posSize <<" positive numbers: ";
	OutputArray(posArr, posSize);
	
	std::cout << negSize <<" negative numbers: ";
	OutputArray(negArr, negSize);
	
	std::cout << zerSize <<" zeros: ";
	OutputArray(zerArr, zerSize);

	return 0;
}