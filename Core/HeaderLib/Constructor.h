#include "Header.h"

std::string ReturnTitle(std::string title);
void HeadLine(short length, std::string title);
void Split(short length, char fillChar);

void Line(short length, std::string name);
void Line(short length, std::string name, bool center);
void Line(short length, std::string name, int numeration);
void Line(short length, std::string name, bool center, int numeration);

void Line(std::string name, short maxNameLength, std::string info, short maxInfoLength);