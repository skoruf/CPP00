#include "Contact.hpp"

Contact::Contact(){

}
/*
Contact::Contact(int index, char *firstName, char *lastName, char *nickName,
	char *phoneNumber, char *darkestSecret){

	this->index = index;
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}
*/
Contact::~Contact(){

}

int	Contact::get_index() const{

	return this->index;
}

void	Contact::set_index(int value){

	this->index = value;
}

std::string	Contact::get_firstName() const{

	return this->firstName;
}

void	Contact::set_firstName(std::string value){

	this->firstName = value;
}

std::string	Contact::get_lastName() const{

	return this->lastName;
}

void	Contact::set_lastName(std::string value){

	this->lastName = value;
}

std::string	Contact::get_nickName() const{

	return this->nickName;
}

void	Contact::set_nickName(std::string value){
	
	this->nickName = value;
}

std::string	Contact::get_phoneNumber() const{

	return this->phoneNumber;
}

void	Contact::set_phoneNumber(std::string value){
	
	this->phoneNumber = value;
}

std::string	Contact::get_darkestSecret() const{

	return this->darkestSecret;
}

void	Contact::set_darkestSecret(std::string value){

	this->darkestSecret = value;
}
