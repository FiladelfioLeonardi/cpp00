/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:11:01 by fefo              #+#    #+#             */
/*   Updated: 2025/07/21 12:22:19 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

class Contact
{
	public:
		int add_contact(Contact *contact, std::string input);
		int set_first_name(std::string first_name);
		int set_last_name(std::string last_name);
		int set_nickname(std::string nickname);
		int set_phone_number(std::string phone_number);
		void set_darkest_secret(std::string darkest_secret);
		int set_phonebook_size(int phonebook_size);
		std::string get_first_name() const;
		std::string get_last_name() const;
		std::string get_nickname() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;
		int get_phonebook_size() const;
		
		private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		int 		phonebook_size;
};

#endif