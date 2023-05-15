#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(const WrongCat &src);
		WrongCat(std::string type);
		~WrongCat();

		void makeSound(void ) const;

	private :

};

#endif