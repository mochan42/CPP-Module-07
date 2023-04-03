/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:41:02 by mochan            #+#    #+#             */
/*   Updated: 2023/04/02 23:48:06 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"

int main()
{
	std::cout << "hello\n";
	int * a = new int();
	std::cout << *a << "\n";

	Array<int> arr(3);
	for (int i = 0; i < 3; i++)
		std::cout << arr[i] << "\n";
	return 0;
}