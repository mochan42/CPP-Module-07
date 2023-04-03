/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:43:31 by mochan            #+#    #+#             */
/*   Updated: 2023/04/02 23:51:05 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

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

template < class T >
class Array
{
    public:
        // CONSTRUCTORS - DESTRUCTOR
        Array(); // Default constructor
        Array(unsigned int n); // Parameterized constructor
        Array(const Array& src); // Copy constructor
        ~Array(); // Destructor

        // OVERLOAD OPERATOR
        Array& operator=(const Array& src);
        T &	operator[](unsigned int index);
        
        // MEMBER FUNCTIONS
        unsigned int	size(void);
        
    private:
        unsigned int    _size;
        T*              _array;
};

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
	for (unsigned int i = 0; i < this->size; i++)
		this->_array[i] = src[i];
}

template <typename T>
Array<T>&  Array<T>::operator=(const Array& src)
{
    std::cout << BLU << "Copy assignment operator called from Array" << D << "\n";
    delete [] _array;
	this->_size = src._size;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->size; i++)
		this->_array[i] = src[i];
    return (*this);
}

template <typename T>
T &	Array<T>::operator[](unsigned int index)
{
	return (this->_array[index]);
}


//======== DESTRUCTOR ==========================================================================
template <typename T>
Array<T>::~Array()
{
    std::cout << CY << "Destructor called from Array" << D << "\n";
	delete[] _array;
}


//======== MEMBER FUNCTIONS =====================================================================
template <typename T>
unsigned int	Array<T>::size(void)
{
	return (this->_size);
}

#endif