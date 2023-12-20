#include "PhoneBook.hpp"

#define ADD 1
#define SEARCH 2
#define EXIT 3

int main()
{
	PhoneBook phoneBook;

	while (1)
	{
		std::string input_menu;
		phoneBook.input_field(input_menu, "Select Command\n 1) ADD, 2) SEARCH, 3) EXIT");
		if (input_menu.compare("ADD") == 0) {
			phoneBook.add();
			std::cout << std::endl;
		}
		else if (input_menu.compare("SEARCH") == 0) {
			phoneBook.search();
			std::cout << std::endl;
		}
		else if (input_menu.compare("EXIT") == 0) {
			exit(0);
		}
		else {
			std::cout << "invalid command!\n" << std::endl;
		}
	}
}