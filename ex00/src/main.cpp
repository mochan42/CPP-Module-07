/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 08:49:11 by moninechan        #+#    #+#             */
/*   Updated: 2023/04/02 17:44:54 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MathOperators.h"

int main(int, char**)
{
	int	a = 21;
	int	b = 42;

	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	std::cout << "max(a,b) = " << max<int>(a, b) << "\n";
	std::cout << "min(a,b) = " <<min<int>(a, b) << "\n";
	swap<int>(a, b);
	std::cout << "swapping a and b...\n";
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	return 0;
}