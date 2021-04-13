#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* pointer = &string;
	std::string& ref = string;

	std::cout << string << std::endl;
	std::cout << *pointer << std::endl; 
	std::cout << ref << std::endl;
	std::cout << static_cast<void*>(&string) << std::endl;
	std::cout << pointer << std::endl;
	std::cout << static_cast<void*>(&ref) << std::endl;
}
