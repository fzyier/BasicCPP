#include <iostream>
#include <ctime>
#include <iomanip>
#include <array>

std::array<int, 9> InitializingMatrix(int start, int end) {
	std::array<int, 9> matrix;

	srand((unsigned)time(0));

	for (int i = 0; i < 9; i++)
		matrix[i] = rand() % end;

	return matrix;
}

std::array<double, 9> InitializingMatrix(double start, double end) {
	std::array<double, 9> matrix;

	srand((unsigned)time(0));

	for (int i = 0; i < 9; i++)
		matrix[i] = start + (rand() / (RAND_MAX / (end - start)));

	return matrix;
}


std::array<char, 9> InitializingMatrix(char start, char end) {
	std::array<char, 9> matrix;

	srand((unsigned)time(0));

	for (int i = 0; i < 9; i++)
		matrix[i] = (int)start + rand() % (int)end;

	return matrix;
}

void Output(std::array<int, 9> matrix)  {
	if (matrix[2] != 0 || matrix[3] != 0 || matrix[4] != 0 || matrix[5] != 0 || matrix[6] != 0 || matrix[7] != 0 || matrix[8] != 0) {
		for (int i = 0; i < matrix.size(); i++)
			(i == matrix.size() / 1.5 || i == matrix.size() / 3)
			? std::cout << std::endl << matrix[i] << " " : std::cout << matrix[i] << " ";
	}
	else {
		std::cout << "MAX: " << matrix[1] << "\nMIN: " << matrix[0];
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void Output(std::array<double, 9> matrix) {
	if (matrix[2] != 0 && matrix[3] != 0 && matrix[4] != 0
		&& matrix[5] != 0 && matrix[6] != 0 && matrix[7] != 0 && matrix[8] != 0) {
	for (int i = 0; i < matrix.size(); i++)
		(i == matrix.size() / 1.5 || i == matrix.size()/3)
		? std::cout << std::endl << std::fixed << std::setprecision(1) << matrix[i] << " " 
		: std::cout << std::fixed << std::setprecision(1) << matrix[i] << " ";
}
	else {
	std::cout << "MAX: " << matrix[1] << "\nMIN: " << matrix[0];
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void Output(std::array<char, 9> matrix) {
	if (matrix[2] != 0 && matrix[3] != 0 && matrix[4] != 0
		&& matrix[5] != 0 && matrix[6] != 0 && matrix[7] != 0 && matrix[8] != 0) {
	for (int i = 0; i < matrix.size(); i++)
		(i == matrix.size() / 1.5 || i == matrix.size()/3) 
		? std::cout << std::endl << (char)matrix[i] << " " : std::cout << (char)matrix[i] << " ";
}
	else {
	std::cout << "MAX: " << (char)matrix[1] << "\nMIN: " << (char)matrix[0];
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

std::array<int, 9> MaxMin(std::array<int, 9> matrix) {
	std::array<int, 9> arr = { matrix[0],matrix[0],NULL,NULL,NULL,NULL,NULL,NULL,NULL };
	for (int i = 0; i < matrix.size(); i++)
		if ((i == 0 || i == 4 || i == 8) && matrix[i] > arr[1]) {
			arr[1] = matrix[i];
		}
		else if((i == 0 || i == 4 || i == 8) && matrix[i] < arr[0])
			arr[0] = matrix[i];
	return arr;
}
std::array<double, 9> MaxMin(std::array<double, 9> matrix) {
	std::array<double, 9> arr = { matrix[0],matrix[0],NULL,NULL,NULL,NULL,NULL,NULL,NULL };
	for (int i = 0; i < matrix.size(); i++)
		if ((i == 0 || i == 4 || i == 8) && matrix[i] > arr[1]) {
			arr[1] = matrix[i];
		}
		else if ((i == 0 || i == 4 || i == 8) && matrix[i] < arr[0])
			arr[0] = matrix[i];
	return arr;
}
std::array<char, 9> MaxMin(std::array<char, 9> matrix) {
	std::array<char, 9> arr = { matrix[0],matrix[0],NULL,NULL,NULL,NULL,NULL,NULL,NULL };
	for (int i = 0; i < matrix.size(); i++)
		if ((i == 0 || i == 4 || i == 8) && matrix[i] > arr[1]) {
			arr[1] = matrix[i];
		}
		else if ((i == 0 || i == 4 || i == 8) && matrix[i] < arr[0])
			arr[0] = matrix[i];
	return arr;
}

std::array<int, 9> Sorting(std::array<int, 9> matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		if (i == 0 || i == 3 || i == 6) {
			if (matrix[i] < matrix[i + 1]) {
				std::swap(matrix[i], matrix[i + 1]);
			}
			if (matrix[i + 1] < matrix[i + 2]) {
				std::swap(matrix[i + 1], matrix[i + 2]);
			}
			if (matrix[i] < matrix[i + 1]) {
				std::swap(matrix[i], matrix[i + 1]);
			}
		}
		else
			continue;
	}
	return matrix;
}
std::array<double, 9> Sorting(std::array<double, 9> matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		if (i == 0 || i == 3 || i == 6) {
			if (matrix[i] < matrix[i + 1]) {
				std::swap(matrix[i], matrix[i + 1]);
			}
			if (matrix[i + 1] < matrix[i + 2]) {
				std::swap(matrix[i + 1], matrix[i + 2]);
			}
			if (matrix[i] < matrix[i + 1]) {
				std::swap(matrix[i], matrix[i + 1]);
			}
		}
		else
			continue;
	}
	return matrix;
}

std::array<char, 9> Sorting(std::array<char, 9> matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		if (i == 0 || i == 3 || i == 6) {
			if (matrix[i] < matrix[i + 1]) {
				std::swap(matrix[i], matrix[i + 1]);
			}
			if (matrix[i + 1] < matrix[i + 2]) {
				std::swap(matrix[i + 1], matrix[i + 2]);
			}
			if (matrix[i] < matrix[i + 1]) {
				std::swap(matrix[i], matrix[i + 1]);
			}
		}
		else
			continue;
	}
	return matrix;
}


// 1 2 3
// 4 5 6
// 7 8 9

int main() {
	std::cout << "MATRIX!!" << std::endl;
	Output(InitializingMatrix(1, 9));
	Output(MaxMin(InitializingMatrix(1, 9)));
	Output(Sorting(InitializingMatrix(1, 9)));
	
	std::cout << "MATRIX!!" << std::endl;
	Output(InitializingMatrix(1., 9.));
	Output(MaxMin(InitializingMatrix(1., 9.)));
	Output(Sorting(InitializingMatrix(1., 9.)));

	std::cout << "MATRIX!!" << std::endl;
	Output(InitializingMatrix('1', '9'));
	Output(MaxMin(InitializingMatrix('1', '9')));
	Output(Sorting(InitializingMatrix('1', '9')));
	return 0;
}


