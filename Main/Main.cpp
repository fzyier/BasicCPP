#include "../Core/HeaderLib/Header.h"

int main() {
	Iron* iron = new Iron;
	iron->Input();
	iron->Print();
	delete iron;
}