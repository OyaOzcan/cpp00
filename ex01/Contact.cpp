#include "Contact.hpp"

void Contact::setFirstName(std::string fn)
{
	this->firstName = fn;
}

std::string Contact::getFirstName()
{
	return this->firstName;
}


void Contact::setLastName(std::string ln)
{
	this->lastName = ln;
}

std::string Contact::getLastName()
{
	return this->lastName;
}



void Contact::setNickName(std::string nn)
{
	this->nickName = nn;
}

std::string Contact::getNickName()
{
	return this->nickName;
}

void Contact::setPhoneNumber(std::string pn)
{
	this->phoneNumber = pn;
}

std::string Contact::getPhoneNumber()
{
	return this->phoneNumber;
}


void Contact::setDarkestSecret(std::string ds)
{
	this->darkestSecret = ds;
}

std::string Contact::getDarkestSecret()
{
	return this->darkestSecret;
}
