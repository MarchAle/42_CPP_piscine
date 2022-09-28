/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:15:18 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/28 13:09:51 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/MutantStack.hpp"

int	main()
{
	std::cout << WHITE << "[ MY TESTS - MutantStack ]" << std::endl;
	MutantStack<int> a;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	
	MutantStack<int> b = a;
	a.pop();
	a.pop();
	a.pop();
	a.push(333);
	
	MutantStack<std::string> c;
	c.push("salut");
	c.push("les");
	c.push("gars");

	std::cout << WHITE << "[ Print a ]" << std::endl;
	for (std::stack<int>::container_type::iterator it = a.begin(); it != a.end(); it++)
		std::cout << GREEN << *it << END << std::endl;
		
	std::cout << WHITE << "[ Print b ]" << std::endl;
	for (std::stack<int>::container_type::const_iterator it = b.cbegin(); it != b.cend(); it++)
		std::cout << CYAN << *it << END << std::endl;
		
	std::cout << WHITE << "[ Print c ]" << std::endl;
	for (std::stack<std::string>::container_type::iterator it = c.begin(); it != c.end(); it++)
		std::cout << MAGENTA << *it << END << std::endl;
		
	{
		std::cout << WHITE << "[ SUBJECT TEST - MutantStack ]" << BGREEN << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{	
		std::cout << WHITE << "[ SUBJECT TEST - std::list ]" << BCYAN << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(mstack);
	}
	return 0;
}