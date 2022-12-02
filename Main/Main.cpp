#include "../Core/HeaderLib/Header.h"

int main() {
	//Mystrcmp
	const char* str1 = { "Hello!" };
	const char* str2 = { "Hello!" };
	std::cout << mystrcmp(str1,str2) << std::endl;
	
	//NumberToString
	std::cout << *NumberToString(7) << std::endl;
	
	//StringToNumber
	char  ch = '1';
	std::cout << StringToNumber(&ch);
	 
	//Upper Case
	std::cout << std::endl << ">  UPPER CASE\n";
	char str3[] = {"hello"};
	
	for (int i = 0; str3[i] != '\0'; i++)
		std::cout << str3[i] << " ";
	
	std::cout << std::endl;
	
	*str3 = *(Uppercase(&str3[0]));
	for (int i = 0; str3[i] != '\0'; i++)
		std::cout << str3[i] << " ";
	
	//Lower Case
	std::cout << std::endl << ">  LOWERCASE\n";
	char str4[] = { "HELLO" };
	
	for (int i = 0; str4[i] != '\0'; i++)
		std::cout << str4[i] << " ";
	std::cout << std::endl;
	
	*str4 = *(Lowercase(&str4[0]));
	
	for (int i = 0; str4[i] != '\0'; i++)
		std::cout << str4[i] << " ";
	std::cout << std::endl;

	//Reverse
	char* str5 = new char[32] {"Hello"};
	str5 = mystrrev(str5);

	for (int i = 0; i < 32; i++)
		std::cout << str5[i] << " ";

	return 0;
}