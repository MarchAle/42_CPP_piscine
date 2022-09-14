/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:15:57 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/14 10:30:27 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	try
	{
		Array<int> test1;
		Array<int> test2(4);
		
		test2[0] = 456;

		Array<int> test3(test2);
		Array<int> test4 = test3;

		const Array<int> test5 = test4;
		const Array<int> test6(test2);
		
		test3[1] = 333;
		test4[2] = 444;
		
		test1.show();
		test2.show();
		test3.show();
		test4.show();
		std::cout << test5[0] << std::endl;
		std::cout << test6[0] << std::endl;

		std::cout << "Size of test1 : " << test1.size() << std::endl;
		std::cout << "Size of test2 : " << test2.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}