#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		~WrongAnimal();

		WrongAnimal & operator=(const WrongAnimal &rhs);

		std::string getType(void) const;
		void makeSound(void) const;

	protected :
		std::string _type;
};

#endif