#include "..\Core\Functions\Random.cpp"

int main() {
	const int size = 10;
	int arr[size];
	Random(arr, size);

	for (int i = 0; i < size; i++) {
		std::cout << arr[i];
		std::cout << std::endl;
	}
}