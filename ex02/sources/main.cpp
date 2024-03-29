/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:20:01 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/29 09:34:38 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "style.h"
#include <iostream>
#include <cstdlib>
#include "Array.tpp"

#define MAX_VAL 750

void	help_msg(std::string msg) {
	std::cout << GREEN << TITLE << " 💬 " << msg << " " << END_STYLE << std::endl;
}

void	warning_msg(std::string msg) {
	std::cout << " ⚠️  " << GREEN << BOLD << UNDERLINE << msg << END_STYLE << std::endl;
}

void	rand_int(Array<int> &array) {
	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = rand() % 10;
}

void	print_int(Array<int> &array) {
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void	print_str(Array<std::string> &array) {
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << i << ": " << array[i] << std::endl;
	std::cout << std::endl;
}

int	main(void) {
	help_msg("main.cpp from intra - Start");
	/*
	 * main from intra - START
	 */
	Array<int>	numbers(MAX_VAL);
	int			*mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception &e)
	{
	std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	/*
	 * main from intra - END
	 */
	help_msg("main.cpp from intra - End");

	std::cout << std::endl;
	help_msg("Creating an Array<int> of size 25, and printing it");
	Array<int>	int_array(25);
	print_int(int_array);

	std::cout << std::endl;
	help_msg("Assigning random values to Array<int> and printing it");
	rand_int(int_array);
	print_int(int_array);

	std::cout << std::endl;
	help_msg("Copying an Array<int> with Array<int>(cpy) and operator = and printing all 3 arrays");
	Array<int>	int_copy(int_array);
	Array<int>	*int_operator = new Array<int>(10);
	*int_operator = int_copy;
	print_int(int_array);
	print_int(int_copy);
	print_int(*int_operator);

	std::cout << std::endl;
	help_msg("Updating first Array<int> and printing all 3 arrays");
	rand_int(int_array);
	print_int(int_array);
	print_int(int_copy);
	print_int(*int_operator);

	std::cout << std::endl;
	help_msg("Updating second Array<int> and printing all 3 arrays");
	rand_int(int_copy);
	print_int(int_array);
	print_int(int_copy);
	print_int(*int_operator);

	std::cout << std::endl;
	help_msg("Updating third Array<int> and printing all 3 arrays");
	rand_int(*int_operator);
	print_int(int_array);
	print_int(int_copy);
	print_int(*int_operator);
	
	delete int_operator;

	std::cout << std::endl;
	help_msg("Creating an Array<std::string> of size 10, and printing it");
	Array<std::string>	str_array(10);
	print_str(str_array);

	std::cout << std::endl;
	help_msg("Assigning values to Array<std::string> and printing it");
	str_array[0] = "a string";
	str_array[3] = "an other string";
	str_array[8] = "and an other one";
	print_str(str_array);

	std::cout << std::endl;
	help_msg("Copying an Array<std::string> with Array<std::string>(cpy) and operator = and printing all 3 arrays");
	Array<std::string>	str_copy(str_array);
	Array<std::string>	*str_operator = new Array<std::string>(10);
	*str_operator = str_copy;
	print_str(str_array);
	print_str(str_copy);
	print_str(*str_operator);

	std::cout << std::endl;
	help_msg("Trying to assigning values (0 to 11: 2 out of bounds) to the first array and printing all 3 arrays");
	for (unsigned int i = 0; i < 12; i++)
	{
		try {
			str_array[i] = "qwertyuiop";
		} catch (std::exception &e) {
			std::cerr << RED << e.what() << END_STYLE << std::endl;
		}
	}
	print_str(str_array);
	print_str(str_copy);
	print_str(*str_operator);

	delete str_operator;

	return (0);
}
