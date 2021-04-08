#include <iostream>

char *upper(char *str)
{
	for (char *it = str; *it != 0; it++)
	{
		*it = toupper(*it);
	}
	return str;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
		std::cout << upper(argv[i]);
	std::cout << std::endl;
	return 0;
}