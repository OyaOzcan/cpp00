/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:55:40 by fgunay            #+#    #+#             */
/*   Updated: 2024/07/23 18:55:41 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];

public:
	PhoneBook()
	{
		for (int i = 0; i < 8; i++)
			this->contacts[i] = Contact();
	};
	void addContact(Contact contact, int i);
	void printAllContacts();
	void printContact(const std::string &rep);
	bool isNumber(const std::string &s);
	bool isValidNumber(const std::string &s);
	bool allSpaces(const std::string &s);
	int my_stoi(const std::string &str);
};

#endif
