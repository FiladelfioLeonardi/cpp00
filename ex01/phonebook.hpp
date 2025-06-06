/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:13:58 by fileonar          #+#    #+#             */
/*   Updated: 2025/06/06 15:45:13 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"


void search(Contact contact, string input);

class Phonebook
{
	public:
		// void add_contact(Contact contact, string input, int &phonebook_size);
		// void display_contacts(Contact contact_limit[], int phonebook_size);
		// void search_contacts(Contact contact_limit[], int phonebook_size);
		
		
	private:
		Contact contact_limit[8];
};
#endif