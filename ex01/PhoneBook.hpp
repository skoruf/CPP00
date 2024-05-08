#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		int	saved_contacts;
		int	next_index;
		Contact	contacts[8];
		
	public:
		PhoneBook();
		~PhoneBook();
		
		void	addContact(Contact contact);
		int	newContact();
		void	search();
};

#endif
