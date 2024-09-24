#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact()
	{
		this->firstName = "";
		this->lastName = "";
		this->nickName = "";
		this->phoneNumber = "";
		this->darkestSecret = "";
	};

	void setFirstName(std::string firstName);
	std::string getFirstName();

	void setLastName(std::string lastName);
	std::string getLastName();

	void setNickName(std::string nickName);
	std::string getNickName();

	void setPhoneNumber(std::string phoneNumber);
	std::string getPhoneNumber();

	void setDarkestSecret(std::string darkestSecret);
	std::string getDarkestSecret();
};

#endif
