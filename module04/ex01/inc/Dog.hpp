#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog(const Dog &src);
		Dog(std::string type);
		~Dog();

		Dog & operator=(const Dog &rhs);
		virtual void makeSound(void) const;

	private :
		Brain* _brain;
	
};

#endif