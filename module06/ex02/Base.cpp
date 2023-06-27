#include "Base.hpp"

Base::~Base() {};

Base * generate(void) {
	std::srand(std::time(0));
	int n = std::rand() % 301;
	if (n >= 0 && n < 100)
    	return new A;
	if (n >= 100 && n < 200)
		return new B;
	return new C;
};

void identify(Base* p) {
	p = generate();
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
	delete p;
};

void identify(Base& p);