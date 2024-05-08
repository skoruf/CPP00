#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

	class	Contact
	{
		private:
			int	index;
			std::string	firstName;
			std::string	lastName;
			std::string	nickName;
			std::string	phoneNumber;
			std::string	darkestSecret;
		
		public:
			Contact();
			~Contact();
			int	get_index() const;
			void	set_index(int value);
			std::string	get_firstName() const;
			void	set_firstName(std::string value);
			std::string	get_lastName() const;
			void	set_lastName(std::string value);
			std::string	get_nickName() const;
			void	set_nickName(std::string value);
			std::string	get_phoneNumber() const;
			void	set_phoneNumber(std::string value);
			std::string	get_darkestSecret() const;
			void	set_darkestSecret(std::string value);
	};

#endif
