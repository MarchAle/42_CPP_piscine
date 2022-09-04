/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:16:09 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/04 15:46:17 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	std::cout << WHITE << "Test du sujet" << std::endl << BYELLOW;	
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl << WHITE << "Mes tests" << std::endl;
	{
		int a = 12, b = 23;

		std::cout << BLUE << "a : " << a << " | b : " << b << " | min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << " | b : " << b << " | min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;
	}
	{
		float a = 0.21, b = 0.35;

		std::cout << MAGENTA << "a : " << a << " | b : " << b << " | min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << " | b : " << b << " | min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;
	}
	{
		char a = 'X', b = 'x';

		std::cout << CYAN << "a : " << a << " | b : " << b << " | min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << " | b : " << b << " | min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;
	}
	{
		std::string a = "couscous", b = "tajine";

		std::cout << GREEN << "a : " << a << " | b : " << b << " | min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << " | b : " << b << " | min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;
	}
	std::cout << END;
}

/////////////////// TEST CORRECTION

// class Awesome
// {
// 	private:
// 		int _n;
// 	public:
// 		Awesome(void) : _n(0) {}
// 		Awesome(int n) : _n(n) {}
// 		Awesome &operator=(Awesome &a) { _n = a._n; return *this;}
// 		bool operator==( Awesome const &rhs) const {return (this->_n == rhs._n);}
// 		bool operator!=( Awesome const &rhs) const {return (this->_n != rhs._n);}
// 		bool operator>( Awesome const &rhs) const {return (this->_n > rhs._n);}
// 		bool operator<( Awesome const &rhs) const {return (this->_n < rhs._n);}
// 		bool operator>=( Awesome const &rhs) const {return (this->_n >= rhs._n);}
// 		bool operator<=( Awesome const &rhs) const {return (this->_n <= rhs._n);}
// 		int get_n() const {return _n;}
		
// };

// std::ostream &operator<<(std::ostream & o, const Awesome &a) { o<<a.get_n(); return o;}

// int main(void)
// {
// 	Awesome a(2), b(4);

// 	swap(a, b);
// 	std::cout << a << " " << b << std::endl;
// 	std::cout << max(a, b) << std::endl;
// 	std::cout << min(a, b) << std::endl;
// 	return (0);
// }