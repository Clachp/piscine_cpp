#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	Animal* tab[10];

	for (int i = 0; i < 5; i++)
	{
		tab[i] = new Dog();
		std::cout << i << " " << tab[i]->getType() << std::endl;
	}
	int j = 0;
	for (int i = 5; i < 10; i++)
	{
		tab[i] = new Cat();
		j++;
		std::cout << j << " " << tab[i]->getType() << std::endl;
	}
	for (int i = 0; i < 10; i++)
		tab[i]->makeSound();
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "And " << i << " " << tab[i]->getType() << " destroyed" << std::endl;
		delete tab[i];
	}

	return 0;
}