#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"

class	Cat : public Animal
{
	public:
				Cat();
				Cat(std::string type);
				Cat(const Cat& copy);
		Cat&	operator=(const Cat& oper);
		virtual	~Cat();
		void	makeSound() const;
};

#endif