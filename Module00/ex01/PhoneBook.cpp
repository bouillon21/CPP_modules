#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->iter = 0;
	this->total_index = 0;
	std::cout<< "начало работы";
}

PhoneBook::~PhoneBook()
{
	std::cout << "конец работы";
}

void PhoneBook::fill_contact()
{
	if (this->iter >= 8 && this->total_index >= 8)
		iter = 0;
	std::cout << std::endl << "Введите имя :";
	std::getline(std::cin, this->people[iter].FirstName);
	std::cout << std::endl << "Введите фамилию :";
	std::getline(std::cin, this->people[iter].LastName);
	std::cout << std::endl << "Введите ник :";
	std::getline(std::cin, this->people[iter].Nickname);
	std::cout << std::endl << "Введите номер :";
	std::getline(std::cin, this->people[iter].PhoneNumber);
	std::cout << std::endl << "Введите секрет :";
	std::getline(std::cin, this->people[iter].Secret);
	iter++;
	if (this->total_index != 8)
		this->total_index++;
}

void PhoneBook::preview_contact(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
	{
		std::cout.width(10);
		std::cout << str << "|";
	}
}

void PhoneBook::contact_view(std::string description, std::string date)
{
	std::cout << WHITE << description << ": ";
	std::cout.width(60 - description.length());
	std::cout.fill('.');
	std::cout << date << std::endl;
}

void PhoneBook::contact_information()
{
	int index;

	std::string str;
	std::cout << YELLOW << "Введите индекс контакта, для которого хотите увиеть полную информацию" << std::endl;
	std::getline(std::cin, str);
	index = atoi(str.c_str());
	if (isdigit(str[0]) && str.length() > 0 && index > -1 && index < this->total_index)
	{
		contact_view("FirstName", this->people[index].FirstName);
		contact_view("LastName", this->people[index].LastName);
		contact_view("Nickname", this->people[index].Nickname);
		contact_view("PhoneNumber", this->people[index].PhoneNumber);
		contact_view("Secret", this->people[index].Secret);
	}
}

void PhoneBook::search_contact()
{
	int i;

	i = -1;
	std::cout << GREEN;
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|  индекс  |   имя    | фамилия  | прозвище |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (++i < total_index)
	{
		std::cout <<"|    "<< i << "     |";
		preview_contact(this->people[i].FirstName);
		preview_contact(this->people[i].LastName);
		preview_contact(this->people[i].Nickname);
		std::cout << std::endl;
		if (i < total_index - 1)
			std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	std::cout<<" ▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔"<<std::endl;
	contact_information();
}