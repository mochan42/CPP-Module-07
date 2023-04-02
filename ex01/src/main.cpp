/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:55:51 by mochan            #+#    #+#             */
/*   Updated: 2023/04/02 19:19:03 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


int main()
{
	{
		std::cout << CY << "========= My Tests =========" << D << "\n";
		int arr[5] = {1, 2, 3, 4, 5};
		int length = sizeof(arr) / sizeof(arr[0]);

		std::cout << YELL << "input array :" << D << "\n";
		for (int i = 0; i < length; i++)
			std::cout << arr[i] << " - ";
		std::cout << "\n";
		std::cout << GREEN << "output after iter is applied :" << D << "\n";
		iter(arr, length, myPrint);
	}
	
	{
		std::cout << PU << "\n===== Eval Sheet tests =====" << D << "\n";
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];

		iter(tab, 5, print<int>);
		iter(tab2, 5, print<Awesome>);
	}

	return 0;
}