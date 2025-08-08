/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:00:32 by fefo              #+#    #+#             */
/*   Updated: 2025/08/08 11:59:40 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int Contact::set_first_name(std::string first_name)
{
	for (size_t i = 0; i < first_name.length(); i++)
	{
		if (!isalpha(first_name[i]))
			return (1);
	}
	printf("First name: %s\n", first_name.c_str());
	this->first_name = first_name;
	return (0);
}

int Contact::set_last_name(std::string last_name)
{
	for (size_t i = 0; i < last_name.length(); i++)
	{
		if (!isalpha(last_name[i]))
			return (1);
	}
	this->last_name = last_name;
	return (0);
}

int Contact::set_nickname(std::string nickname)
{
	for (size_t i = 0; i < nickname.length(); i++)
	{
		if (!isalpha(nickname[i]))
			return (1);
	}
	this->nickname = nickname;
	return (0);
}

int Contact::set_phone_number(std::string phone_number)
{
	for (size_t i = 0; i < phone_number.length(); i++)
	{
		if (!isdigit(phone_number[i]))
			return (1);
	}
	this->phone_number = phone_number;
	return (0);
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

int Contact::set_phonebook_size(int phonebook_size)
{
	if (phonebook_size <= 0)
		phonebook_size++;
	else if (phonebook_size > 8)
	{
		std::cout << "Phonebook is full. Cannot add more contacts." << std::endl;
		return (1);
	}
	printf("Phonebook size: %d\n", phonebook_size);
	return (phonebook_size);
}
	

std::string Contact::get_first_name() const
{
	return first_name;
}

std::string Contact::get_last_name() const
{
	return last_name;
}

std::string Contact::get_nickname() const
{
	return nickname;
}

std::string Contact::get_phone_number() const
{
	return phone_number;
}

std::string Contact::get_darkest_secret() const
{
	return darkest_secret;
}

int Contact::get_phonebook_size() const
{
	return phonebook_size;
}

