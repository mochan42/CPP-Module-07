/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:43:31 by mochan            #+#    #+#             */
/*   Updated: 2023/04/03 13:40:43 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"


//======== CONSTRUCTORS =========================================================================
template <typename T>
Array<T>::Array() :
	_size(0), _array(NULL)
{
	std::cout << BLU << "Default constructor called from Array" << D << "\n";
}

template <typename T>
Array<T>::Array(unsigned int n) :
	_size(n), _array(new T[n])
{
	std::cout << BLU << "Parameterized constructor called from Array" << D << "\n";
}

template <typename T>
Array<T>::Array(const Array& src) :
	_size(src._size), _array(new T[src._size])
{
	std::cout << BLU << "Copy constructor called from Array" << D << "\n";
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
}


//======== OVERLOAD OPERATORS ===================================================================
template <typename T>
Array<T>&  Array<T>::operator=(const Array& src)
{
	std::cout << BLU << "Copy assignment operator called from Array" << D << "\n";
	this->_size = src._size;
	if (_array != NULL)
		delete [] _array;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
	return (*this);
}

template <typename T>
T &	Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index > (this->_size - 1))
		throw OutOfRangeException();
	return (this->_array[index]);
}

//======== DESTRUCTOR ==========================================================================
template <typename T>
Array<T>::~Array()
{
	std::cout << CY << "Destructor called from Array" << D << "\n";
	delete[] _array;
}


//======== GETTER / SETTER =====================================================================
template <typename T>
unsigned int	Array<T>::size(void)
{
	return (this->_size);
}

template <typename T>
void			Array<T>::setArray(void)
{
	if (_size == 0)
		std::cout << "Empty Array" << "\n";
	else
	{
		for (unsigned int i = 0; i < this->size(); i++)
			std::cout << _array[i] << "\n";
	}
}


//======== MEMBER FUNCTIONS ====================================================================
template <typename T>
void	Array<T>::printArrayElements(void)
{
	if (_size == 0)
		std::cout << "Empty Array" << "\n";
	else
	{
		for (unsigned int i = 0; i < this->size(); i++)
		{
			if (i != this->size() - 1)
				std::cout << _array[i] << " / ";
			else
				std::cout << _array[i] << "\n";
		}
		
	}
}

#endif