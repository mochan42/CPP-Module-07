/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MathOperators.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 08:54:23 by moninechan        #+#    #+#             */
/*   Updated: 2023/04/02 17:07:37 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MathOperators.h"

//======== CONSTRUCTORS =========================================================================
MathOperators::MathOperators()
{
	std::cout << BLU << "Default constructor called from MathOperators" << D << "\n";
}

MathOperators::MathOperators(const MathOperators& src)
{
	std::cout << BLU << "Copy constructor called from MathOperators" << D << "\n";
	*this = src;
}

MathOperators& MathOperators::operator=(const MathOperators& src)
{
	std::cout << BLU << "Copy assignment operator called from MathOperators" << D << "\n";
	(void)src;
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
MathOperators::~MathOperators()
{
	std::cout << CY << "Destructor called from MathOperators" << D << "\n";
}


