#include "..\HeaderLib\Header.h"
//Two Numbers
inline int MaxNumber(int num1, int num2) {
	return(num1 >= num2) ? num1 : num2;
}
inline double MaxNumber(double num1, double num2) {
	return(num1 >= num2) ? num1 : num2;
}
inline char MaxNumber(char num1, char num2) {
	return(num1 >= num2) ? num1 : num2;
}
//Three Numbers
inline int MaxNumber(int num1, int num2, int num3) {
	if (num1 >= num2) {
		if (num1 >= num3)
			return num1;
		else
			return num3;
	}
	else if (num2 >= num3) {
		if (num2 >= num1)
			return num2;
		else
			return num1;
	}
	else if (num3 >= num2) {
		if (num3 >= num1)
			return num3;
		else
			return num1;
	}
}
inline double MaxNumber(double num1, double num2, double num3) {
	if (num1 >= num2) {
		if (num1 >= num3)
			return num1;
		else
			return num3;
	}
	else if (num2 >= num3) {
		if (num2 >= num1)
			return num2;
		else
			return num1;
	}
	else if (num3 >= num2) {
		if (num3 >= num1)
			return num3;
		else
			return num1;
	}
}
inline char MaxNumber(char num1, char num2, char num3) {
	if (num1 >= num2) {
		if (num1 >= num3)
			return num1;
		else
			return num3;
	}
	else if (num2 >= num3) {
		if (num2 >= num1)
			return num2;
		else
			return num1;
	}
	else if (num3 >= num2) {
		if (num3 >= num1)
			return num3;
		else
			return num1;
	}
}