/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 20:46:23 by fileonar          #+#    #+#             */
/*   Updated: 2025/06/06 16:08:44 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void search(Contact contact, string input)
{
	cout << "|" << "Index     " 
		 << "|" << "First Name" 
		 << "|" << "Last Name " 
		 << "|" << "Nickname  " 
		 << "|" << endl;
	for (int i = 0; i < contact.get_phonebook_size(); i++)
	{
		cout << "|" << setw(10) << i 
			 << "|" << setw(10) << contact.get_first_name() 
			 << "|" << setw(10) << contact.get_last_name() 
			 << "|" << setw(10) << contact.get_nickname() 
			 << "|" << endl;
	}
	cout << "Enter index to view contact details: ";
	getline(cin, input);


	
}