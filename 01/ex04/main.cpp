#include "Replacement.hpp"

int main (int ac, char **av)
{
	Replacement replace;
	if (ac < 4)
		std:: cout << "Usage: <filename> String1 String2" << std::endl;
	else
		{
			replace.openfiles(av);
			replace.replacestr();
			replace.closefile();
		}
	return (0);
}