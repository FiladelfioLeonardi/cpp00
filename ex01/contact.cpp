/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:00:32 by fefo              #+#    #+#             */
/*   Updated: 2025/05/26 01:36:16 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_first_name(string first_name)
{
    this->first_name = first_name;
}

void Contact::set_last_name(string last_name)
{
    this->last_name = last_name;
}

void Contact::set_nickname(string nickname)
{
    this->nickname = nickname;
}

void Contact::set_phone_number(string phone_number)
{
    this->phone_number = phone_number;
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
            contact.set_first_name(input);

            cout << "Enter last name: ";
            getline(cin, input);
            contact.set_last_name(input);

            cout << "Enter nickname: ";
            getline(cin, input);
            contact.set_nickname(input);

            cout << "Enter phone number: ";
            getline(cin, input);
            contact.set_phone_number(input);

            cout << "Enter darkest secret: ";
            getline(cin, input);
            contact.set_darkest_secret(input);

            cout << "Contact added successfully!" << endl;
            break;
        }
        else if (std::string(argv[1]) == "SEARCH")
        {
            std::cout << "SEARCH" << endl; // Add a new contact
        }
        else if (std::string(argv[1]) == "EXIT")
        {
            break;
            return (0);
        }
        else
        {
            cout << "Invalid command. Please try again." << endl;
        }
    }
    return (0);
}