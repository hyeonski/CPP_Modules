#include <iostream>
#include <fstream>

int replace(std::string filename, std::string s1, std::string s2)
{
	std::cout << filename << std::endl;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	
	std::ifstream in(filename);
	if (in.fail())
	{
		std::cerr << "Error : " << "failed to open input file." << std::endl;
		return (1);
	}

}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "too many or less arguments!" << std::endl;
		return (1);
	}
	replace(argv[1], argv[2], argv[3]);
}