/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:41:02 by mochan            #+#    #+#             */
/*   Updated: 2023/04/03 12:51:43 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main()
{
	{
		std::cout << YELL << "====== Construction of an Array with no parameter =====================" << D << "\n";
		std::cout << PU << "Construction of array : arr1" << D << "\n";
		Array<char> arr1;
		arr1.printArrayElements();
	}

	{
		std::cout << YELL << "\n====== Construction of an Array with unsigned int n as parameter ======" << D << "\n";
		std::cout << PU << "Construction of an array of 3 integers elements : arr2" << D << "\n";
		Array<int> arr2(3);
		arr2.printArrayElements();
	}
	
	{
		std::cout << YELL << "\n====== Catching exceptions ============================================" << D << "\n";
		{
			std::cout << PU << "Construction of an array of 3 integers elements : arr2" << D << "\n";
			Array<int> arr2(3);
			arr2.printArrayElements();
			try
			{
				std::cout << PU << "Trying to access arr2[-1]..." << D << "\n";
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
				std::cout << PU << "Trying to access arr2[100]..." << D << "\n";
				std::cout << arr2[100] << "\n";
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
		
	std::cout << YELL << "\n====== Construction of an Array by copy ===============================" << D << "\n";
	// arr1._size = 6;
	// for (int i = 0; i < static_cast<int>(arr1.size()); i++)
	// 	arr1[i] = 'a';
	// for (int i = 0; i < static_cast<int>(arr2.size()); i++)
	// 	std::cout << arr1[i] << "\n";
	


	return 0;
}