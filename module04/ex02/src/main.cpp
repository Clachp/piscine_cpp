#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	A_Animal* tab[10];

	for (int i = 0; i < 5; i++)
	{
		tab[i] = new Dog();
		std::cout << (i + 1) << " " << tab[i]->getType() << "s created 🐶" << std::endl;
	}
	std::cout << std::endl;
	int j = 0;
	for (int i = 5; i < 10; i++)
	{
		tab[i] = new Cat();
		j++;
		std::cout << j << " " << tab[i]->getType() << "s created 🐱" << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		tab[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Destroying " << tab[i]->getType() << " " << i << std::endl;
		delete tab[i];
	}

	std::cout << std::endl << "Now let's make a deep copy of a Dog" << std::endl << std::endl;

	const Dog	snoop;
	std::cout << std::endl;
	const Dog	snoopy(snoop);
	std::cout << std::endl;
	snoop.makeSound();
	snoopy.makeSound();
	snoop.getBrain()->setIdea("Let's go swimming !", 0);
	std::cout << std::endl;
	std::cout << snoop.getType() << " first idea : " << snoop.getBrain()->getIdea(0) << std::endl;
	std::cout << snoopy.getType() << " first idea : " << snoopy.getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;
	return 0;
}
