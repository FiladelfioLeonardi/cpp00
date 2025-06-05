/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:00:32 by fefo              #+#    #+#             */
/*   Updated: 2025/06/05 20:16:31 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

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

int main(int argc, char **argv)
{
    if (argc == 1)
        return (cout << "Usage: " << argv[0] << " <command>" << endl, 1);

    while (1)
    {
        if (std::string(argv[1]) == "ADD")
        {
            Contact contact;
            string input;

            cout << "Enter first name: ";
            getline(cin, input);
            if (contact.set_first_name(input) == 1)
			{
				cout << "Invalid first name. Please try again." << endl;
				continue;
			}
			cout << "First name: " << input << endl;
            cout << "Enter last name: ";
            getline(cin, input);
            if (contact.set_last_name(input) == 1)
			{
				cout << "Invalid last name. Please try again." << endl;
				continue;
			}
			cout << "Last name: " << input << endl;
            cout << "Enter nickname: ";
            getline(cin, input);
           if ( contact.set_nickname(input) == 1)
		   {
				cout << "Invalid nickname. Please try again." << endl;
				continue;
		   }
			cout << "Nickname: " << input << endl;
            cout << "Enter phone number: ";
            getline(cin, input);
			if (contact.set_phone_number(input) == 1)
			{
				cout << "Invalid phone number. Please try again." << endl;
				continue;
			}
			cout << "Phone number: " << input << endl;
            cout << "Enter darkest secret: ";
            getline(cin, input);
            contact.set_darkest_secret(input);
			cout << "Darkest secret: " << input << endl;
            cout << "Contact added successfully!" << endl;
            break;
        }
        else if (std::string(argv[1]) == "SEARCH")
        {
            std::cout << "SEARCH" << endl;
			break ;
			 // Add a new contact
        }
        else if (std::string(argv[1]) == "EXIT")
        {
            break;
        }
        else
        {
            cout << "Invalid command. Please try again." << endl;
			break ;
        }
    }
    return (0);
}