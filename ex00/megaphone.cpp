#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl, 0);
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < (int)strlen(argv[i]); j++)
			std::cout <<(char)toupper(argv[i][j]);
	}
	std::cout <<std::endl;
	return (0);
}
