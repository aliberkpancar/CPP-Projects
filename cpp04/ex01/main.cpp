#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
	std::cout << "\033[33mAnimal tests:\033[0m" << std::endl;
	std::cout << "----------------" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << "\033[33mWrongAnimal tests:\033[0m" << std::endl;
	std::cout << "----------------" << std::endl;
	{
		const WrongAnimal* Wmeta = new WrongAnimal();
		const WrongAnimal* WCat = new WrongCat();
		std::cout << WCat->getType() << " " << std::endl;
		WCat->makeSound();
		Wmeta->makeSound();
		delete Wmeta;
		delete WCat;
	}
	return 0;
}

// __attribute__ ((destructor)) void f()
// {
// 	system("leaks Polymorphism");
// }
