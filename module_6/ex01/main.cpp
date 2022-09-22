/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:44:41 by amarchal          #+#    #+#             */
/*   Updated: 2022/09/22 10:57:19 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));	
}

int main()
{
	Data data("Roger", 63);
	std::cout << BBLUE << "Name : " << data.getName() << " | Age : " << data.getAge() << END << std::endl;
	
	std::cout << BRED << "Serialisation of Roger" << END << std::endl;
	uintptr_t ptr = serialize(&data);
	std::cout << BGREEN << "Deserialisation of Roger" << END << std::endl;
	Data *newData = deserialize(ptr);

	std::cout << BBLUE << "Name : " << newData->getName() << " | Age : " << newData->getAge() << END << std::endl;
}
