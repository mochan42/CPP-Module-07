/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MathOperators.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:50:42 by mochan            #+#    #+#             */
/*   Updated: 2023/04/02 17:50:44 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHOPERATORS_HPP
#define MATHOPERATORS_HPP

#include <iostream>

// *** COLORS ***//
# define BLANK "\e[0m"
# define BLA "\033[0;30m"
# define RED "\033[0;31m"
# define BDRED "\033[1;31m"
# define GREEN "\033[0;32m"
# define BDGRN "\033[1;32m"
# define LIGRN "\033[38;5;82m"
# define BKLIGRN "\033[30;48;5;82m"
# define DKGRN "\033[38;5;22m"
# define YELL "\033[0;33m"
# define BLU "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

template < typename T >
void swap(T& x, T& y)
{
	T tmp = y;
	y = x;
	x = tmp;
}


template < typename T >
T min(T const & x, T const & y)
{
	if (x == y)
		return y;
	else
	{
		if (x < y)
			return x;
		else
			return y;
	}
}

template < typename T >
T max(T const & x, T const & y)
{
		if (x == y)
			return y;
		else
		{
			if (x > y)
				return x;
			else
				return y;
		}
}

#endif