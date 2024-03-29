/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:07:13 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/29 05:00:19 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WATHEVER_HPP
# define WATHEVER_HPP

template<typename T>
void swap(T &a, T &b) {
	T tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template <typename T>
T min(const T &a, const T &b) {
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T max(const T &a, const T &b) {
	if (a > b)
		return (a);
	return (b);
}

#endif
