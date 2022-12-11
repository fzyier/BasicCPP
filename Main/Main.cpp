#include "../Core/HeaderLib/Header.h"

int main() {
	ComplexNums nums{3,3};
	nums.Sum(nums.first_numer,nums.second_number);
	nums.Sub(nums.first_numer, nums.second_number);
	nums.Mul(nums.first_numer, nums.second_number);
	nums.Div(nums.first_numer, nums.second_number);

	return 0;
}