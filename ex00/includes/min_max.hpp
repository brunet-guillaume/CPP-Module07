/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:19:08 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/28 14:23:02 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_MAX_HPP
# define MIN_MAX_HPP

template <typename T>
T min(T &a, T &b) {
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T max(T &a, T &b) {
	if (a > b)
		return (a);
	return (b);
}

#endif
