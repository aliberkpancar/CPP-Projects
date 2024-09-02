#include "cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& cure) : AMateria(cure)
{
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

Cure& Cure::operator=(const Cure& cure)
{
	_type = cure._type;
	return (*this);
}

