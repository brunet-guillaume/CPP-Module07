/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:20:01 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/29 06:24:57 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "style.h"
#include <iostream>
#include "Array.tpp"

void	help_msg(std::string msg) {
	std::cout << GREEN << TITLE << " 💬 " << msg << " " << END_STYLE << std::endl;
}

void	warning_msg(std::string msg) {
	std::cout << " ⚠️  " << GREEN << BOLD << UNDERLINE << msg << END_STYLE << std::endl;
}

int	main(void) {
	Array<int>	t(10);

	t[5] = 4;
	for(int i = 0; i < 11; i++) {
		try {
			std::cout << t[i] << " ";
		} catch (std::exception &e) {
			std::cerr << RED << e.what() << END_STYLE << std::endl;
		}
	}
	Array<int>	c(t);
	Array<int>	e;
	e = c;
	t[5] = 9;
	for(int i = 0; i < 11; i++) {
		try {
			std::cout << c[i] << " ";
		} catch (std::exception &e) {
			std::cerr << RED << e.what() << END_STYLE << std::endl;
		}
	}
	for(int i = 0; i < 11; i++) {
		try {
			std::cout << t[i] << " ";
		} catch (std::exception &e) {
			std::cerr << RED << e.what() << END_STYLE << std::endl;
		}
	}
	for(int i = 0; i < 11; i++) {
		try {
			std::cout << e[i] << " ";
		} catch (std::exception &e) {
			std::cerr << RED << e.what() << END_STYLE << std::endl;
		}
	}
	return (0);
}
