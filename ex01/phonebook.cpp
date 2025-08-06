/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 20:46:23 by fileonar          #+#    #+#             */
/*   Updated: 2025/08/06 17:44:50 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() : contact_count(0) {}

void Phonebook::add_contact()
{
	if (contact_count >= 8)
	{
		std::cout << "Phonebook is full. Overwriting the oldest contact." << std::endl;
		contact_count = 7; // Overwrite the oldest contact
	}

	Contact &contact = contacts[contact_count % 8];
	std::string input;

	std::cout << "Enter first name: ";
	getline(std::cin, input);
	while (contact.set_first_name(input))
	{
		std::cout << "Invalid first name. Please try again." << std::endl;
		std::cout << "Enter first name: ";
		getline(std::cin, input);
	}

	std::cout << "Enter last name: ";
	getline(std::cin, input);
	while (contact.set_last_name(input))
	{
		std::cout << "Invalid last name. Please try again." << std::endl;
		std::cout << "Enter last name: ";
		getline(std::cin, input);
	}

	std::cout << "Enter nickname: ";
	getline(std::cin, input);
	while (contact.set_nickname(input))
	{
		std::cout << "Invalid nickname. Please try again." << std::endl;
		std::cout << "Enter nickname: ";
		getline(std::cin, input);
	}

	std::cout << "Enter phone number: ";
	getline(std::cin, input);
	while (contact.set_phone_number(input))
	{
		std::cout << "Invalid phone number. Please try again." << std::endl;
		std::cout << "Enter phone number: ";
		getline(std::cin, input);
	}

	std::cout << "Enter darkest secret: ";
	getline(std::cin, input);
	contact.set_darkest_secret(input);
	std::cout << "Contact added successfully!" << std::endl;
	contact_count++;
}

void Phonebook::search_contacts() const
{
	if (contact_count == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}

	std::cout << "|" << std::setw(10) << "Index"
				<< "|" << std::setw(10) << "First Name"
				<< "|" << std::setw(10) << "Last Name"
				<< "|" << std::setw(10) << "Nickname"
				<< "|" << std::endl;

	for (int i = 0; i < contact_count && i < 8; i++)
	{
		const Contact &contact = contacts[i];
		std::cout << "|" << std::setw(10) << i
					<< "|" << std::setw(10) << (contact.get_first_name().length() > 10 ? contact.get_first_name().substr(0, 9) + "." : contact.get_first_name())
					<< "|" << std::setw(10) << (contact.get_last_name().length() > 10 ? contact.get_last_name().substr(0, 9) + "." : contact.get_last_name())
					<< "|" << std::setw(10) << (contact.get_nickname().length() > 10 ? contact.get_nickname().substr(0, 9) + "." : contact.get_nickname())
					<< "|" << std::endl;
	}

	std::cout << "Enter index to view contact details: ";
	std::string input;
	getline(std::cin, input);

	int index = -1;
	try
	{
		index = std::stoi(input);
	}
	catch (std::exception &e)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}

	if (index < 0 || index >= contact_count || index >= 8)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}

	const Contact &contact = contacts[index];
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
}

void search(Contact *contact, std::string input)
{
	std::cout << "|" << "Index     " 
		 << "|" << "First Name" 
		 << "|" << "Last Name " 
		 << "|" << "Nickname  " 
		 << "|" << std::endl;
	for (int i = 0; i < contact->get_phonebook_size(); i++)
	{
		std::cout << "|" << std::setw(10) << i 
			 << "|" << std::setw(10) << contact->get_first_name() 
			 << "|" << std::setw(10) << contact->get_last_name() 
			 << "|" << std::setw(10) << contact->get_nickname() 
			 << "|" << std::endl;
	}
	std::cout << "Enter index to view contact details: ";
	getline(std::cin, input);
}