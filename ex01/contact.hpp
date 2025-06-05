/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:11:01 by fefo              #+#    #+#             */
/*   Updated: 2025/06/05 21:13:51 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>

using namespace std;
class Contact
{
    public:
        // Contact();
        // ~Contact();
		int add_contact(Contact contact, string input, int phonebook_size);
        int set_first_name(string first_name);
        int set_last_name(string last_name);
        int set_nickname(string nickname);
        int set_phone_number(string phone_number);
        void set_darkest_secret(string darkest_secret);
        string get_first_name() const;
        string get_last_name() const;
        string get_nickname() const;
        string get_phone_number() const;
        string get_darkest_secret() const;
		
        private:
        string	first_name;
        string	last_name;
        string	nickname;
        string	phone_number;
        string	darkest_secret;
		int		phonebook_size;
};

#endif