/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:41:02 by mochan            #+#    #+#             */
/*   Updated: 2023/04/03 13:39:39 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

# define SIZE 10

int main()
{
	{
		std::cout << YELL << "====== Construction of an Array with no parameter =====================" << D << "\n";
		std::cout << PU << "Declaration of an array (no parameters) : arr1" << D << "\n";
		Array<int> arr1;
		arr1.printArrayElements();
	}

	{
		std::cout << YELL << "\n====== Construction of an Array with unsigned int n as parameter ======" << D << "\n";
		std::cout << PU << "Declaration of an array of 3 integers elements : arr2" << D << "\n";
		Array<int> arr2(3);
		arr2.printArrayElements();
	}
	
	{
		std::cout << YELL << "\n====== Catching exceptions ============================================" << D << "\n";
		{
			std::cout << PU << "Declaration of an array of 3 integers elements : arr2" << D << "\n";
			Array<int> arr2(3);
			arr2.printArrayElements();
			try
			{
				std::cout << PU << "Trying to access arr2[" << RED << "-1" << PU << "]..." << D << "\n";
				std::cout << arr2[-1] << "\n";
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		{
			std::cout << PU << "\nConstruction of an array of 3 integers elements  : arr2" << D << "\n";
			Array<int> arr2(3);
			arr2.printArrayElements();
			try
			{
				std::cout << PU << "Trying to access arr2[" << RED << "3" << PU << "]..." << D << "\n";
				std::cout << arr2[3] << "\n";
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
	
	{
		std::cout << YELL << "\n====== Construction of an Array by copy ===============================" << D << "\n";
		std::cout << PU << "\nConstruction of an array by copy of arr3  : arr3CopyConstructor" << D << "\n";
		Array<int>	arr3(SIZE);

		std::srand(std::time(NULL));
		for (int i = 0; i < SIZE; i++)
		{
			const int	value = std::rand() % 100;
			arr3[i] = value;
		}
		arr3.printArrayElements();
		
		Array<int> arr3CopyConstructor = arr3;
		arr3CopyConstructor.printArrayElements();
	}

	{
		std::cout << YELL << "\n====== Construction of an Array by assignement operator===============================" << D << "\n";
		std::cout << PU << "\nDeclaration of an array of 4 integers elements  : arr4" << D << "\n";
		Array<int>	arr4(3);
		arr4.printArrayElements();
		
		std::cout << PU << "\nConstruction of an array of 10 integers elements  : arr3" << D << "\n";
		Array<int>	arr3(SIZE);
		std::srand(std::time(NULL));
		for (int i = 0; i < SIZE; i++)
		{
			const int	value = std::rand() % 100;
			arr3[i] = value;
		}
		arr3.printArrayElements();
		arr4 = arr3;
		arr4.printArrayElements();
	}

	return 0;
}