/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:41:02 by mochan            #+#    #+#             */
/*   Updated: 2023/04/03 14:44:08 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

# define SIZE 10

int main()
{
	{
		std::cout << YELL << "====== Construction of an Array with no parameter =====================" << D << "\n";
		std::cout << PU << "Construction of an array (no parameters) : arr1" << D << "\n";
		Array<int> arr1;
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
		std::cout << PU << "Construction of an array : arr3" << D << "\n";
		Array<int>	arr3(SIZE);

		std::srand(std::time(NULL));
		for (int i = 0; i < SIZE; i++)
		{
			const int	value = std::rand() % 100;
			arr3[i] = value;
		}
		arr3.printArrayElements();
		std::cout << PU << "Construction of an array by copy of arr3  : arr3CopyConstructor" << D << "\n";
		Array<int> arr3CopyConstructor = arr3;
		arr3CopyConstructor.printArrayElements();
	}

	{
		std::cout << YELL << "\n====== Construction of an Array by assignement operator================" << D << "\n";
		std::cout << PU << "Construction of an array of 4 integers elements  : arr4" << D << "\n";
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

	{
		std::cout << YELL << "\n====== Construction of an Array of strings ============================" << D << "\n";
		std::cout << PU << "Construction of an array of 10 strings elements  : arr5" << D << "\n";
		Array<std::string> arr5(SIZE);
		arr5.printArrayElements();
		std::cout << PU << "Usage of operator [] for writing inside the array elements." << D << "\n";
		arr5[0] = "42";
		arr5[1] = " ";
		arr5[2] = "Wolfsburg";
		arr5[3] = ",";
		arr5[4] = "Next";
		arr5[5] = " ";
		arr5[6] = "Education";
		arr5[7] = " ";
		arr5[8] = "Generation";
		arr5[9] = "!";
		arr5.printArrayElements();
	}

	{
		std::cout << YELL << "\n==== Construction of an Array with parameter / compare with new [] ====" << D << "\n";
		std::cout << PU << "Construction of an array of 10 integers elements from template class: arr6" << D << "\n";
		Array<int> arr6(SIZE);
		std::srand(std::time(NULL));
		for (int i = 0; i < SIZE; i++)
		{
			const int	value = std::rand() % 100;
			arr6[i] = value;
		}
		arr6.printArrayElements();
		std::cout << PU << "Construction of an array of 10 integers elements from integer array : actualIntArray" << D << "\n";
		int * actualIntArray = new int[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			actualIntArray[i] = arr6[i];
		}
		for (int i = 0; i < SIZE; i++)
		{
			if (i < (SIZE - 1))
				std::cout << actualIntArray[i] << " / ";
			else
				std::cout << actualIntArray[i] << "\n";
		}
		delete [] actualIntArray;
	}

	return 0;
}