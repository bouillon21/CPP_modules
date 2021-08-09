#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <string>
#include <iostream>

# define RED			"\033[1;31m"
# define RESET			"\033[0m"
# define YELLOW			"\033[1;33m"
# define BLUE			"\x1b[34m"
# define GREEN			"\x1b[32m"
# define WHITE			"\033[1;39m"

using namespace std;

class Contact
{
	public :
		string LastName;
		string FirstName;
		string Nickname;
		string PhoneNumber;
		string Secret;
};

class PhoneBook
{
	public :
		PhoneBook(void);
		~PhoneBook();
		void fill_contact();
		void search_contact();

	private :
		int iter;
		int total_index;
		Contact people[8];
		void preview_contact(std::string str);
		void contact_information();
		void contact_view(std::string description, std::string date);
};

#endif