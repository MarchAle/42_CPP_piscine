/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 15:42:14 by amarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceMateria.hpp"
#include "CureMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	Character roger("ROGER");	
	// Character billou("BILLOU");	
	IceMateria *ice1 = new IceMateria("ice");
	IceMateria *ice2 = new IceMateria("ice");
	// IceMateria *ice3 = new IceMateria("ice");
	// IceMateria *ice4 = new IceMateria("ice");
	// IceMateria *ice5 = new IceMateria("ice");
	// CureMateria cureMat("cure");	
	// CureMateria *cureMat2 = new CureMateria("cure");

	// IceMateria iceMat("ice");	
	// IceMateria *cloneIce = iceMat.clone();
	
	// iceMat.use(roger);	
	// cloneIce->use(roger);	
	// cureMat.use(roger);	

	// roger.equip(&iceMat);
	// billou.equip(&iceMat);
	roger.equip(ice1);
	roger.equip(ice2);
	Character gerard = roger;
	gerard.use(0, roger);
	// roger.equip(ice2);
	// roger.equip(ice3);
	// roger.equip(ice4);
	// roger.equip(ice5);
	// roger.equip(&cureMat);
	// roger.equip(cureMat2);
	

	// roger.use(1, billou);
	// roger.use(1, billou);
	// roger.equip(&iceMat);

	// roger.unequip(0);
	// roger.unequip(1);
	// roger.unequip(0);

	// delete cloneIce;
	
	return (0);
}