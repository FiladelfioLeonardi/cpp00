/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:00:32 by fefo              #+#    #+#             */
/*   Updated: 2025/06/06 16:11:50 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int Contact::set_first_name(string first_name)
{
	for (size_t i = 0; i < first_name.length(); i++)
	{
		if (!isalpha(first_name[i]))
			return (1);
	}
    this->first_name = first_name;
	return (0);
}

int Contact::set_last_name(string last_name)
{
	for (size_t i = 0; i < last_name.length(); i++)
	{
		if (!isalpha(last_name[i]))
			return (1);
	}
    this->last_name = last_name;
	return (0);
}

int Contact::set_nickname(string nickname)
{
	for (size_t i = 0; i < nickname.length(); i++)
	{
		if (!isalpha(nickname[i]))
			return (1);
	}
    this->nickname = nickname;
	return (0);
}

int Contact::set_phone_number(string phone_number)
{
	for (size_t i = 0; i < phone_number.length(); i++)
	{
		if (!isdigit(phone_number[i]))
			return (1);
	}
    this->phone_number = phone_number;
	return (0);
}

void Contact::set_darkest_secret(string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

int Contact::set_phonebook_size(int phonebook_size)
{
	if (phonebook_size < 0 || phonebook_size > 8)
		phonebook_size++;
	else if (phonebook_size > 8)
	{
		cout << "Phonebook is full. Cannot add more contacts." << endl;
		return (1);
	}
	return (phonebook_size);
}
	

string Contact::get_first_name() const
{
    return first_name;
}

string Contact::get_last_name() const
{
    return last_name;
}

string Contact::get_nickname() const
{
    return nickname;
}

string Contact::get_phone_number() const
{
    return phone_number;
}

string Contact::get_darkest_secret() const
{
    return darkest_secret;
}

int Contact::get_phonebook_size() const
{
	return (0);
}

int add_contact(Contact contact, string input)
{
	while (1)
	{
		cout << "Enter first name: ";
		getline(cin, input);
		if (contact.set_first_name(input) == 1)
		{
			cout << "Invalid first name. Please try again." << endl;
			continue ;
		}
		cout << "First name: " << contact.get_first_name() << endl;
		cout << "Enter last name: ";
		getline(cin, input);
		if (contact.set_last_name(input) == 1)
		{
			cout << "Invalid last name. Please try again." << endl;
			continue ;
		}
		cout << "Last name: " << input << endl;
		cout << "Enter nickname: ";
		getline(cin, input);
		if (contact.set_nickname(input) == 1)
		{
			cout << "Invalid nickname. Please try again." << endl;
			continue ;
		}
		cout << "Nickname: " << input << endl;
		cout << "Enter phone number: ";
		getline(cin, input);
		if (contact.set_phone_number(input) == 1)
		{
			cout << "Invalid phone number. Please try again." << endl;
			continue ;
		}
		cout << "Phone number: " << input << endl;
		cout << "Enter darkest secret: ";
		getline(cin, input);
		contact.set_darkest_secret(input);
		cout << "Darkest secret: " << input << endl;
		cout << "Contact added successfully!" << endl;
		break ;
	}
	contact.set_phonebook_size(contact.get_phonebook_size() + 1);
	return (0);
}

int main(int argc, char **argv)
{
    if (argc == 1)
	{
		Contact	contact;
		string	input;
		
		contact.set_phonebook_size(0);
		while (1)
		{
			cout << "Commands: \"" << "ADD, SEARCH or EXIT\"" << endl;
			cout << "Enter command: ";
			getline(cin, input);
			if (input == "ADD")
			{
				add_contact(contact, input);
				continue ;
			}
			else if (input == "SEARCH")
			{
				search(contact, input);
			}
			else if (input == "EXIT")
			{
				break ;
			}
			else
			{
				cout << "Invalid command. Try again." << endl;
				continue ;
			}
			return (0);
		}
	}
	return (1);
}