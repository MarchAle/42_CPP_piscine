/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:21:52 by amarchal          #+#    #+#             */
/*   Updated: 2022/08/17 16:59:28 by amarchal         ###   ########.fr       */
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

	MateriaSource *source = new MateriaSource;
	
	source->learnMateria(ice1);

	// iceMat.use(roger);	
	// cloneIce->use(roger);	
	// cureMat.use(roger);	

	// roger.equip(&iceMat);
	// billou.equip(&iceMat);
	roger.equip(source->createMateria("ice"));
	roger.use(0, roger);
	roger.use(0, roger);
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
	delete ice1;
	delete ice2;
	delete source;
	
	return (0);
}