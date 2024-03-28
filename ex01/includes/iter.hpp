/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:07:13 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/28 16:34:42 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>
# include <iomanip>

template<typename T>
void	print_array(T &val) {
	std::cout << val << " ";
};

template<typename T>
void	add_one(T &val) {
	val++;
};

template<typename T, typename U>
void	iter(T *a, size_t len, void (*fn)(U&)) {
	if (a == NULL || fn == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		fn(a[i]);
};

#endif
