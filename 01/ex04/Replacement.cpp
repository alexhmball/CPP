#include "Replacement.hpp"

void Replacement::replacestr()
{
	size_t pos = 0;
	while ((pos = all.find(str1, pos)) != all.npos)
	{
		all.erase(pos, str1.length());
		all.insert(pos, str2);
		pos += str2.length();
	}
	outfile << all;
}

void Replacement::openfiles(char **av)
{
	char *newfile;
	std::string line;

	file = av[1];
	str1 = av[2];
	str2 = av[3];
	replace = file + ".replace";
	newfile = &replace[0];
	infile.open(av[1], std::ios::in);
	if (!infile)
	{
		std::cout << av[1] << " couldn't be opened" << std::endl;
		return ;
	}
	outfile.open(newfile, std::ios::out);
	if (!outfile)
	{
		std::cout << newfile << "file couldn't be created" << std::endl;
		return ;
	}
	while (std::getline(infile, line))
	{
		all += line;
		if (!infile.eof())
			all += "\n";
	}
}

void Replacement::closefile()
{
	infile.close();
	outfile.close();
}