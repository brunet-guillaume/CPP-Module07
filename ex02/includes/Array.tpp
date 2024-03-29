/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <guill@umebrunet.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 05:23:21 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/29 06:25:22 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template<typename T>
Array<T>::Array(): _size(0), _array(NULL) {}

template<typename T>
Array<T>::Array(unsigned int n): _size(n), _array(NULL) {
	try {
		this->_array = new T[this->_size]();
	} catch (const std::bad_alloc &e) {
		std::cerr << "Allocation failed: " << e.what() << std::endl;
		this->_array = NULL;
		this->_size = 0;
	}
}

template<typename T>
Array<T>::Array(const Array<T> &src): _size(0), _array(NULL) {
	*this = src;
}

template<typename T>
Array<T>::~Array() {
	delete [] this->_array;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &rhs) {
	this->_size = rhs.size();
	if (this->_array)
		delete [] this->_array;
	try {
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	} catch (const std::bad_alloc &e) {
		std::cerr << "Allocation failed: " << e.what() << std::endl;
		this->_array = NULL;
		this->_size = 0;
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](const unsigned int i) {
	if (i >= this->size())
		throw Array<T>::OutOfBoundsException();
	return (this->_array[i]);
}

template<typename T>
unsigned int	Array<T>::size() const {
	return (this->_size);
}

template<typename T>
const char	*Array<T>::OutOfBoundsException::what() const throw() {
	return ((char *)"Index out of bounds");
}

#endif
