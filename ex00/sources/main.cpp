/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:20:01 by gbrunet           #+#    #+#             */
/*   Updated: 2024/03/29 09:41:32 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "style.h"
#include "whatever.hpp"
#include <iostream>

void	help_msg(std::string msg) {
	std::cout << GREEN << TITLE << " 💬 " << msg << " " << END_STYLE << std::endl;
}

void	warning_msg(std::string msg) {
	std::cout << " ⚠️  " << GREEN << BOLD << UNDERLINE << msg << END_STYLE << std::endl;
}

int	main(void) {
	help_msg("main from subject - Start");
	// MAIN FROM SUBJECT
	int am = 2;
	int bm = 3;
	::swap( am, bm );
	std::cout << "a = " << am << ", b = " << bm << std::endl;
	std::cout << "min( a, b ) = " << ::min( am, bm ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( am, bm ) << std::endl;
	std::string cm = "chaine1";
	std::string dm = "chaine2";
	::swap(cm, dm);
	std::cout << "c = " << cm << ", d = " << dm << std::endl;
	std::cout << "min( c, d ) = " << ::min( cm, dm ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( cm, dm ) << std::endl;
	// END MAIN FROM SUBJECT
	help_msg("main from subject - End");

	int			a = 10;
	int			b = 200;
	int			c = 10;
	int			*d = new int(100);
	int			*e = new int(2000);
	int			*f = new int(100);
	std::string	s1 = "abcdef";
	std::string	s2 = "uvwxyz";

	std::cout << std::endl;
	warning_msg("Informations :");
	std::cout << BOLD << "int  a: " << END_STYLE << THIN << a << END_STYLE << std::endl;
	std::cout << BOLD << "int  b: " << END_STYLE << THIN << b << END_STYLE <<  std::endl;
	std::cout << BOLD << "int  c: " << END_STYLE << THIN << c << END_STYLE <<  std::endl;
	std::cout << BOLD << "int *d: " << END_STYLE << THIN << *d << END_STYLE <<  std::endl;
	std::cout << BOLD << "    &d: " << END_STYLE << THIN << d << END_STYLE <<  std::endl;
	std::cout << BOLD << "int *e: " << END_STYLE << THIN << *e << END_STYLE <<  std::endl;
	std::cout << BOLD << "    &e: " << END_STYLE << THIN << e << END_STYLE <<  std::endl;
	std::cout << BOLD << "int *f: " << END_STYLE << THIN << *f << END_STYLE <<  std::endl;
	std::cout << BOLD << "    &f: " << END_STYLE << THIN << f << END_STYLE <<  std::endl;
	std::cout << BOLD << "str s1: " << END_STYLE << THIN << s1 << END_STYLE <<  std::endl;
	std::cout << BOLD << "str s2: " << END_STYLE << THIN << s2 << END_STYLE <<  std::endl;

	std::cout << std::endl;
	help_msg("swap(a, b) (int)");
	::swap(a, b);
	std::cout << BOLD << "int  a: " << END_STYLE << THIN << a << END_STYLE << std::endl;
	std::cout << BOLD << "int  b: " << END_STYLE << THIN << b << END_STYLE <<  std::endl;

	std::cout << std::endl;
	help_msg("swap(d, e) (int pointers)");
	::swap(d, e);
	std::cout << BOLD << "int *d: " << END_STYLE << THIN << *d << END_STYLE <<  std::endl;
	std::cout << BOLD << "    &d: " << END_STYLE << THIN << d << END_STYLE <<  std::endl;
	std::cout << BOLD << "int *e: " << END_STYLE << THIN << *e << END_STYLE <<  std::endl;
	std::cout << BOLD << "    &e: " << END_STYLE << THIN << e << END_STYLE <<  std::endl;

	std::cout << std::endl;
	help_msg("swap(s1, s2) (int)");
	::swap(s1, s2);
	std::cout << BOLD << "str s1: " << END_STYLE << THIN << s1 << END_STYLE << std::endl;
	std::cout << BOLD << "str s2: " << END_STYLE << THIN << s2 << END_STYLE <<  std::endl;

	std::cout << std::endl;
	warning_msg("Informations :");
	std::cout << BOLD << "int  a: " << END_STYLE << THIN << a << END_STYLE << std::endl;
	std::cout << BOLD << "int  b: " << END_STYLE << THIN << b << END_STYLE <<  std::endl;
	std::cout << BOLD << "int  c: " << END_STYLE << THIN << c << END_STYLE <<  std::endl;
	std::cout << BOLD << "int *d: " << END_STYLE << THIN << *d << END_STYLE <<  std::endl;
	std::cout << BOLD << "    &d: " << END_STYLE << THIN << d << END_STYLE <<  std::endl;
	std::cout << BOLD << "int *e: " << END_STYLE << THIN << *e << END_STYLE <<  std::endl;
	std::cout << BOLD << "    &e: " << END_STYLE << THIN << e << END_STYLE <<  std::endl;
	std::cout << BOLD << "int *f: " << END_STYLE << THIN << *f << END_STYLE <<  std::endl;
	std::cout << BOLD << "    &f: " << END_STYLE << THIN << f << END_STYLE <<  std::endl;
	std::cout << BOLD << "str s1: " << END_STYLE << THIN << s1 << END_STYLE <<  std::endl;
	std::cout << BOLD << "str s2: " << END_STYLE << THIN << s2 << END_STYLE <<  std::endl;

	std::cout << std::endl;
	help_msg("min(a, b) (int)");
	std::cout << BOLD << "min(a, b): " << END_STYLE << THIN << ::min(a, b) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("min(b, c) (int)");
	std::cout << BOLD << "min(b, c): " << END_STYLE << THIN << ::min(b, c) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("min(d, e) (int pointers)");
	std::cout << BOLD << "min(d, e): " << END_STYLE << THIN << ::min(d, e) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("min(*d, *e) (int pointers value)");
	std::cout << BOLD << "min(*d, *e): " << END_STYLE << THIN << ::min(*d, *e) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("min(*e, *f) (int pointers value)");
	std::cout << BOLD << "min(*e, *f): " << END_STYLE << THIN << ::min(*e, *f) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("min(s1, s2) (string)");
	std::cout << BOLD << "min(s1, s2): " << END_STYLE << THIN << ::min(s1, s2) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("max(a, b) (int)");
	std::cout << BOLD << "max(a, b): " << END_STYLE << THIN << ::max(a, b) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("max(b, c) (int)");
	std::cout << BOLD << "max(b, c): " << END_STYLE << THIN << ::max(b, c) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("max(d, e) (int pointers)");
	std::cout << BOLD << "max(d, e): " << END_STYLE << THIN << ::max(d, e) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("max(*d, *e) (int pointers value)");
	std::cout << BOLD << "max(*d, *e): " << END_STYLE << THIN << ::max(*d, *e) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("max(*e, *f) (int pointers value)");
	std::cout << BOLD << "max(*e, *f): " << END_STYLE << THIN << ::max(*e, *f) << END_STYLE << std::endl;

	std::cout << std::endl;
	help_msg("max(s1, s2) (string)");
	std::cout << BOLD << "max(s1, s2): " << END_STYLE << THIN << ::max(s1, s2) << END_STYLE << std::endl;

	delete d;
	delete e;
	delete f;

	return (0);
}
