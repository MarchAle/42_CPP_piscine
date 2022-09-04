/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:31:42 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/04 15:44:04 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void revStr(std::string &str)
{
	std::reverse(str.begin(), str.end());
}

void multiplyByTwo(int &nb)
{
	nb *= 2;
}

int	main()
{
	std::string stringTab[] = {"l'herbe", "d'Auchan", "ne", "rigole", "que", "rarement"};
	int			stringTabSize = sizeof(stringTab) / sizeof(std::string);
	int			intTab[] = {1, 5, 31, 3, 17};
	int			intTabSize = sizeof(intTab) / sizeof(int);

	iter(stringTab, stringTabSize, printContent);
	std::cout << std::endl;
	iter(intTab, intTabSize, printContent);
	std::cout << std::endl;

	iter(stringTab, stringTabSize, revStr);
	iter(intTab, intTabSize, multiplyByTwo);
	
	iter(stringTab, stringTabSize, printContent);
	std::cout << std::endl;
	iter(intTab, intTabSize, printContent);
	std::cout << std::endl;
}

/////////////////// TEST CORRECTION

// class Awesome
// {
// 	public:
// 		Awesome( void ): _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };
// std::ostream & operator<< (std::ostream & o, Awesome const & rhs) {o << rhs.get(); return o; }

// template<typename T>
// void print (T const & x) { std::cout << x << std::endl; return; }

// int main() 
// { 
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];
// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// 	return 0;
// }