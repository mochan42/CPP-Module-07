/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:42:57 by mochan            #+#    #+#             */
/*   Updated: 2023/04/03 12:17:50 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

#include "Array.h"

template < class T >
class Array
{
    public:
		// CONSTRUCTORS - DESTRUCTOR
		Array(); // Default constructor
		Array(unsigned int n); // Parameterized constructor
		Array(const Array& src); // Copy constructor
		~Array(); // Destructor

		// OVERLOAD OPERATORS
		Array& operator=(const Array& src);
		T &	operator[](unsigned int index);

		// GETTER - SETTER
		unsigned int	size(void);
		void			setArray(void);

		// MEMBER FUNCTIONS
		void			printArrayElements(void);

		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index is out of range!");
				}
		};

	private:
		unsigned int	_size;
		T*				_array;
};


#endif