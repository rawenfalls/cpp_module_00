/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:21:20 by eraynald          #+#    #+#             */
/*   Updated: 2022/10/17 17:21:22 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string> //std::string
#include <iomanip> // set
#include <sstream> // std::stringstream


class PhoneBook
{	
	public:
		void input_contact (int _idx);
		void print_page (void) const;
		void print_column(std::string text) const;
		void print_privew(int index) const;

	private:
		int idx;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
