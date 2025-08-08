/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:59:48 by fefo              #+#    #+#             */
/*   Updated: 2025/08/08 12:33:36 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
	Phonebook phonebook;
	std::string input;
	
	while (true)
	{
		std::cout << "Commands: \"ADD, SEARCH, EXIT\"" << std::endl;
		std::cout << "Enter command: ";
		getline(std::cin, input);
		
		// Convert to uppercase
		for (size_t i = 0; i < input.length(); i++)
		{
			input[i] = toupper(input[i]);
		}
		
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contacts();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command. Try again." << std::endl;
	}
	return 0;
}