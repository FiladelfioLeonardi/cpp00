/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:13:58 by fileonar          #+#    #+#             */
/*   Updated: 2025/07/21 12:18:18 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"


void search(Contact *contact, std::string input);

class Phonebook
{
	public:
		Phonebook();
		void add_contact();
		void search_contacts() const;

	private:
		Contact contacts[8];
		int contact_count;
};
#endif