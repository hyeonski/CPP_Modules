#include <iostream>
#include <fstream>

void replaceLine(std::string& line, std::string& s1, std::string& s2)
{
	std::string::size_type pos = 0;

	while (1)
	{
		pos = line.find(s1, pos);
		if (pos == std::string::npos)
			break ;
		line.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
}

int replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream in(filename);
	if (in.fail())
	{
		std::cerr << "Error : " << "failed to open input file." << std::endl;
		return (1);
	}

	std::ofstream out(filename + ".replace");
	if (out.fail())
	{
		std::cerr << "Error : " << "failed to open output file." << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(in, line))
	{
		replaceLine(line, s1, s2);
		out << line;
		if (!in.eof())
			out << std::endl;
		line.clear();
	}
	return (0);
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "too many or less arguments!" << std::endl;
		return (1);
	}
	return (replace(argv[1], argv[2], argv[3]));
}