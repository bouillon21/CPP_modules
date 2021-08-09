#include "PhoneBook.hpp"

void enter_cmd(std::string *command)
{
	std::cout <<std::endl << GREEN <<"Вот команды которые ты можешь использвать:" <<std::endl;
	std::cout << std::endl << YELLOW <<"ADD - для добавления" <<std::endl;
	std::cout << YELLOW <<"SEARCH - для поиска" <<std::endl;
	std::cout << YELLOW <<"EXIT - для выхода" <<std::endl;
	std::cout <<std::endl << BLUE <<"Enter command: "<< WHITE;
	std::getline(std::cin, *command);
	if (std::cin.eof())
		exit(0);
}

int check_cmd(std::string *command)
{
	if (*command == "EXIT")
		return (0);
	else if (*command == "ADD")
		return (1);
	else if (*command == "SEARCH")
		return (2);
	else
	{
		std::cout << "Сорямба, нет такой команды"<< std::endl;
		return (-1);
	}
}

int cmd(std::string *command)
{
	enter_cmd(command);
	return(check_cmd(command));
}

int main()
{
	int check;
	PhoneBook Book;
	std::string command;

	while ((check = cmd(&command)))
	{
		if (check == 1)
			Book.fill_contact();
		else if (check == 2)
			Book.search_contact();
	}
}