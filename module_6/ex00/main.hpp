/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:31:24 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/24 13:41:53 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3

# include <iostream>
# include <string>
# include <limits>

int	isChar(std::string input);
int isInt(std::string input);
int isDouble(std::string input);
int isFloat(std::string input);
int	checkType(std::string input);

void	convertChar(std::string input);
void	convertInt(std::string input);

#endif