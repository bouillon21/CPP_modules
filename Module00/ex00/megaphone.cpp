#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc != 1)
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				argv[i][j] = toupper(argv[i][j]);
			std::cout<< argv[i] << " ";
		}
		std::cout<<std::endl;
		return (0);
	}
	std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	return (0);
}
