#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "j is a " << j->getType() << std::endl;
	j->makeSound();
	std::cout << "i is a " << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << "meta is a " << meta->getType() << std::endl;
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "Now let's make a wrong animal" << std::endl << std::endl;
	
	const WrongAnimal* wrong_meta = new WrongAnimal();
	std::cout << "Wrong_meta is a " << wrong_meta->getType() << std::endl;
	wrong_meta->makeSound();
	
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << "Wrong_i is a " << wrong_i->getType() << std::endl;
	wrong_i->makeSound();


	delete wrong_meta;
	delete wrong_i;

	return 0;
}