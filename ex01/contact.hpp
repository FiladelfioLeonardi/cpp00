/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:11:01 by fefo              #+#    #+#             */
/*   Updated: 2025/06/06 16:00:28 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;
class Contact
{
    public:
        // Contact();
        // ~Contact();
		int add_contact(Contact contact, string input);
        int set_first_name(string first_name);
        int set_last_name(string last_name);
        int set_nickname(string nickname);
        int set_phone_number(string phone_number);
        void set_darkest_secret(string darkest_secret);
		int set_phonebook_size(int phonebook_size);
        string get_first_name() const;
        string get_last_name() const;
        string get_nickname() const;
        string get_phone_number() const;
        string get_darkest_secret() const;
		int get_phonebook_size() const;
		
        private:
        string	first_name;
        string	last_name;
        string	nickname;
        string	phone_number;
        string	darkest_secret;
		int		phonebook_size;
};

#endif