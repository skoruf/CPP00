#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	print_start_msg(){

	std::cout <<"My Awesome PhoneBook: a 42 Project" <<std::endl <<std::endl;
	std::cout <<"Stores up to 8 contacts that you can call from your local phone\
 booth, if you" <<std::endl <<"write them on a piece of paper. Unfortunatley, this program\
 is pretty useless" <<std::endl <<"and will delete all the contacts once exited. If you want\
 to use it anyways," <<std::endl <<"here are the 3 awesome commands that you can enter:"<<std::endl 
 	<<std::endl;
	std::cout <<"ADD: save a new contact with all the important stuff you need to know about"
 <<std::endl <<"a person." <<std::endl <<"SEARCH: display all the previously saved contacts and\
 gather detailed" <<std::endl <<"information about one of them." <<std::endl <<"EXIT: most useful\
 function: quit the program." <<std::endl <<std::endl;
}

void	exit_msg(){

	std::cout <<std::endl <<"exiting Phonebook" <<std::endl;
}

int	main()
{
	PhoneBook phonebook;
	
	while (1){
		
		print_start_msg();
		std::cout <<"Choose option[ADD, SEARCH, EXIT]: ";
		std::string input;
		std::getline (std::cin, input);
		std::string add("ADD");
		std::string search("SEARCH");
		std::string exit("EXIT");
		if (!input.compare(exit) || !input[0])
			return exit_msg(), 0;
		else if (!input.compare(add)){
			if (phonebook.newContact())
				return exit_msg(), 0;
		}
		else if (!input.compare(search))
			phonebook.search();
		else
			std::cout <<"Invalid Input: " <<input <<std::endl;	
	}
	return 0;
}
