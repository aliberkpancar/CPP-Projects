#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
					WrongAnimal();
					WrongAnimal(std::string type);
	virtual			~WrongAnimal();
					WrongAnimal(const WrongAnimal &copy);
	WrongAnimal&	operator=(const WrongAnimal& oper);
	virtual void	makeSound() const;
	std::string		getType(void) const;
};

#endif
