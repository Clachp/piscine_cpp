#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat();
		Cat(const Cat &src);
		Cat(std::string type);
		~Cat();

		virtual void makeSound(void) const;

	private :

};

#endif