#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#include <iostream>

class A_Animal {
	public :
		A_Animal();
		A_Animal(const A_Animal &src);
		virtual ~A_Animal();

		A_Animal & operator=(const A_Animal &rhs);

		std::string getType(void) const;
		virtual void makeSound(void) const = 0;

	protected :
		std::string _type;
};

#endif