#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal {
	public :
		Dog();
		Dog(const Dog &src);
		Dog(std::string type);
		virtual ~Dog();

		Dog & operator=(const Dog &rhs);
		virtual void makeSound(void) const;
		Brain* getBrain ( void ) const;

	private :
		Brain* _brain;
	
};

#endif