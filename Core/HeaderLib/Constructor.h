#include "Header.h"

std::string ReturnTitle(std::string title);
void HeadLine(std::string title, int length);
void Split(char fillChar, int length);

void Line(std::string name, int maxNameLength, bool center = false, bool boolNumeration = false, int numeration = 0);

void Line(std::string name, int maxNameLength, std::string info, int maxInfoLength, bool center = false, bool boolNumeration = false, int numeration = 0);

void BACK(int length, bool center = false, bool boolNumeration = false, int numeration = 0);
void EXIT(int length, bool center = false, bool boolNumeration = false, int numeration = 0);