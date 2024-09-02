#include "AMateria.hpp"
#include "ice.hpp"
#include "cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new ICHARACTER_HPP();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new ICharacter("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new ICharacter("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}