#include <iostream>
#include <exception>

class ImpossibleConvertException : public std::exception
{
public:
	virtual const char* what() const throw();
};

const char* ImpossibleConvertException::what() const throw()
{
	return ("impossible");
}

void printChar(double value)
{
	std::cout << "char: ";
	try
	{
		if (isnan(value) || value < CHAR_MIN || value > CHAR_MAX)
			throw ImpossibleConvertException();
		char c = static_cast<char>(value);
		if (32 <= c && c <= 126)
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
}

void printInt(double value)
{
	std::cout << "int: ";
	try
	{
		if (isnan(value) || value < INT_MIN || value > INT_MAX)
			throw ImpossibleConvertException();
		int i = static_cast<int>(value);
		std::cout << i << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void printFloat(double value)
{
	std::cout << "float: ";
	try
	{
		float f = static_cast<float>(value);
		if (!isinf(f) && !isnan(f) && (value < -__FLT_MAX__ || value > __FLT_MAX__))
			throw ImpossibleConvertException();
		int i = static_cast<int>(value);
		std::cout << value;
		if (i - value == 0)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void printDouble(double value)
{
	std::cout << "double: ";
	std::cout << static_cast<double>(value);
	
	int i = static_cast<int>(value);
	if (i - value == 0)
		std::cout << ".0" ;
	std::cout << std::endl;
}


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error: bad arguments\n" << std::endl;
		return (1);
	}
	std::string str = argv[1];
	double value = atof(str.c_str());

	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}