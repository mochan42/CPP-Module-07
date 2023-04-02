/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MathOperators.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 08:55:06 by moninechan        #+#    #+#             */
/*   Updated: 2023/04/02 17:11:54 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHOPERATORS_HPP
#define MATHOPERATORS_HPP
#include <iostream>

class MathOperators
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		MathOperators();
		MathOperators(const MathOperators& src);
		~MathOperators();

		// OVERLOAD OPERATOR
		MathOperators& operator=(const MathOperators& src);
	

	private:
	
};

#endif