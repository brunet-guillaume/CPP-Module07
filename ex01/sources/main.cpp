/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:20:01 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/28 16:45:01 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "style.h"
#include "iter.hpp"
#include <iostream>
#include <stdlib.h>

void	help_msg(std::string msg) {
	std::cout << GREEN << TITLE << " 💬 " << msg << " " << END_STYLE << std::endl;
}

void	warning_msg(std::string msg) {
	std::cout << " ⚠️  " << GREEN << BOLD << UNDERLINE << msg << END_STYLE << std::endl;
}

void	set_int(int &i) {
	i = std::rand() % 100;
}

void	set_char(char &c) {
	c = std::rand() % 26 + 65;
}

int	main(void) {
	int		*ints = new int[20];
	char	*strs = new char[20];

	std::srand(time(NULL));

	help_msg("Creating an array of 20 chars and assigning random chars");
	iter(strs, 20, &set_char);
	iter(strs, 20, &print_array<const char>);
	std::cout << std::endl;
	help_msg("Adding one to the first 10 chars");
	iter(strs, 10, &add_one<char>);
	iter(strs, 20, &print_array<char>);
	std::cout << std::endl;

	std::cout << std::endl;
	help_msg("Creating an array of 20 ints and assigning random ints");
	iter(ints, 20, &set_int);
	iter(ints, 20, &print_array<int>);
	std::cout << std::endl;
	help_msg("Adding one to the first 10 ints");
	iter(ints, 10, &add_one<int>);
	iter(ints, 20, &print_array<const int>);
	std::cout << std::endl;

	delete[] ints;
	delete[] strs;

	return (0);
}
