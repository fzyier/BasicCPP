#include "../Core/HeaderLib/Header.h"

int main() {
	//mystrlen
	const char* str1 = { "HELLO!" };
	int str1_length = mystrlen(str1);
	std::cout << str1_length << std::endl;
	//mystrcpy
	const char* str2 = { "Heyka!" };
	char* str2_p = nullptr;
	str2_p = mystrcpy(str2_p, str2);
	//mystrcat
	const char* str3 = { "qq!" };
	char* str3_p = new char[4] {"Hi!"};
	str3_p = mystrcat(str3_p, str3);
	//mystrchr
	char* str4_p = new char[11] {"What's up!"};
	str4_p = mystrchr(str4_p, 'u');
	//mystrstr
	char* str5 = new char[7] {"dnnddn"};
	char* str5_sub = new char[3] {"nd"};
	char* str5_p = mystrstr(str5, str5_sub);
}