#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook(){

	this->saved_contacts = 0;
	this->next_index = 0;
}

PhoneBook::~PhoneBook(){

}

std::string	add_field(std::string field){
	
	std::string	buff;
	std::cout <<"Enter the " <<field <<": ";
	std::getline (std::cin, buff);
	return buff;
}

void	PhoneBook::addContact(Contact contact){

	if (this->next_index == 8)
		this->next_index = 0;
	this->contacts[this->next_index] = contact;
	std::cout <<"added contact" <<std::endl;
	this->next_index++;
	if (this->saved_contacts < 8)
		this->saved_contacts++;
}

int	check_numeric(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); ++it){
	
		if (!std::isdigit(*it))
			return 1;
	}
	return 0;
}

int	PhoneBook::newContact()
{
	Contact	contact;
	std::string	buff;
	
	contact.set_index(this->next_index);
	std::string	first_name("first name");
	buff = add_field(first_name);
	if (!buff[0])
		return 1;
	contact.set_firstName(buff);
	std::string	last_name("last name");
	buff = add_field(last_name);
	if (!buff[0])
		return 1;
	contact.set_lastName(buff);
	std::string	nickname("nickname");
	buff = add_field(nickname);
	if (!buff[0])
		return 1;
	contact.set_nickName(buff);
	std::string	phone_no("phone number");
	buff = add_field(phone_no);
	while (check_numeric(buff) && buff[0]){
		
		std::cout <<"Please only enter digits" <<std::endl;
		buff = add_field(phone_no);
	}
	if (!buff[0])
		return 1;
	contact.set_phoneNumber(buff);
	std::string	darkest("darkest secret");
	buff = add_field(darkest);
	if (!buff[0])
		return 1;
	contact.set_darkestSecret(buff);
	addContact(contact);
	return 0;
}

void	display_field(std::string field, int last){

	if (field.size() > 9)
		std::cout <<field.substr(0, 9) <<".";
	else {
		for (int i = 0; i + field.size() < 10; i++)
			std::cout <<" ";
		std:: cout <<field;
	}
	if (!last)
		std:: cout <<"|";
}

void	display_contact(Contact contact)
{
	std::cout <<"index: " <<contact.get_index() <<std::endl;
	std::cout <<"first name: " <<contact.get_firstName() <<std::endl;
	std::cout <<"last name: " <<contact.get_lastName() <<std::endl;
	std::cout <<"nickname: " <<contact.get_nickName() <<std::endl;
	std::cout <<"Phone number: " <<contact.get_phoneNumber() <<std::endl;
	std::cout <<"darkest secret: " <<contact.get_darkestSecret() <<std::endl;
}

void	PhoneBook::search(){

	std::string	input;
	int	index;

	if (!this->saved_contacts){
	
		std::cout <<"No entries in phone book" <<std::endl;
		return;
	}
	std::cout <<std::endl <<"     index|first name| last name|  nickname" <<std::endl;
	for (int i = 0; i < this->saved_contacts; i++){
	
		std::cout << "         " <<contacts[i].get_index() <<"|";
		display_field(contacts[i].get_firstName(), 0);
		display_field(contacts[i].get_lastName(), 0);
		display_field(contacts[i].get_nickName(), 1);
		std::cout <<std::endl;
	}
	std::cout <<std::endl <<"Enter index for detailed information: ";
	std::getline (std::cin, input);
	index = atoi(input.c_str());
	if (check_numeric(input) || index < 0 || index >= this->saved_contacts)
		std::cout <<"Invalid input" <<std::endl;
	else
		display_contact(contacts[index]);
	std::cout <<std::endl;
}
