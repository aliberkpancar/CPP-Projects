#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
					Animal();
					Animal(std::string type);
	virtual			~Animal();
					Animal(const Animal &copy);
	Animal&			operator=(const Animal& oper);
	virtual void	makeSound() const;
	std::string		getType(void) const;
};

#endif