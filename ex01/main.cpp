#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook pb;
	std::string reply;

	int i = 0;
	int contactNum = 0;


while (1)
{
	std::cout << "\nWelcome! Please enter a command ADD, SEARCH, EXIT -> ";
	std::getline(std::cin, reply);
	std::cout << "\n";

	if (reply == "EXIT")
	{
		std::cout << "Good-Bye\n";
		return 0;
	}

	else if (reply == "ADD" )
	{
		Contact contact;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

		std::cout << "First name: ";
		std::getline(std::cin, firstName);
		while (firstName == "" || pb.allSpaces(firstName)) 
		{
			std::cout << "First name must not be empty\n";
			std::cout << "First name: ";
			std::getline(std::cin, firstName);
		}
		contact.setFirstName(firstName);

		std::cout << "Last name: ";
		std::getline(std::cin, lastName);
		while (lastName == "" || pb.allSpaces(lastName)) 
		{
			std::cout << "Last name must not be empty\n";
			std::cout << "Last name: ";
			std::getline(std::cin, lastName);
		}
		contact.setLastName(lastName);

		std::cout << "Nick name: ";
		std::getline(std::cin, nickName);
		while (nickName == "" || pb.allSpaces(nickName)) 
		{
			std::cout << "Nick name must not be empty\n";
			std::cout << "Nick name: ";
			std::getline(std::cin, nickName);
		}
		contact.setNickName(nickName);

		std::cout << "Phone number: ";
		std::getline(std::cin, phoneNumber);
		while (phoneNumber == "" || pb.allSpaces(phoneNumber) || !pb.isNumber(phoneNumber)) 
		{
			std::cout << "Phone number must be a valid number\n";
			std::cout << "Phone number: ";
			std::getline(std::cin, phoneNumber);
		}
		contact.setPhoneNumber(phoneNumber);

		std::cout << "Darkest secret: ";
		std::getline(std::cin, darkestSecret);
		while (darkestSecret == "" || pb.allSpaces(darkestSecret)) 
		{
			std::cout << "Darkest secret must not be empty\n";
			std::cout << "Darkest secret: ";
			std::getline(std::cin, darkestSecret);
		}
		contact.setDarkestSecret(darkestSecret);

		pb.addContact(contact, i);
		contactNum++;
		i++;
		if (i == 8)
			i = 0;
	}
	else if (reply == "SEARCH")
	{
		pb.printAllContacts();
		if (contactNum > 0)
		{
			std::cout << "ID of the contact you wanna reach: ";
			std::getline(std::cin, reply);
			while (!pb.isNumber(reply) || !pb.isValidNumber(reply) || contactNum < pb.my_stoi(reply))
			{
				std::cout << "Invalid id! Please enter a valid id: ";
				std::getline(std::cin, reply);
			}
			pb.printContact(reply);
		}
	}
	else
	{
		std::cout << "You can only use ADD, SEARCH, or EXIT" << std::endl;
	}
}
return 0;
}