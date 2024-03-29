/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <guill@umebrunet.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 05:05:58 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/29 06:10:05 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
	private:
		unsigned int	_size;
		T				*_array;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		~Array();

		Array &operator=(const Array &rhs);

		T &operator[](const unsigned int i);

		unsigned int size() const;

		class OutOfBoundsException: public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
