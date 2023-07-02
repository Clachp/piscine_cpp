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
	std::cout << "--- Upcasting Base POINTER to the right type ---" << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << "Dynamic cast to type A => Base class is of type A\n" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Dynamic cast to type B => Base class is of type B\n" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Dynamic cast to type C => Base class is of type C\n" << std::endl;
	else
		std::cout << "Base is NULL" << std::endl;
};

void identify(Base& p) {
	std::cout << "--- Upcasting Base REFERENCE to the right type ---" << std::endl;
	try {
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "Conversion to A OK => Base class is of type A\n" << std::endl;
		return ;
	} catch (std::exception &err) {}
	try {
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "Conversion to B OK => Base class is of type B\n" << std::endl;
		return ;
	} catch (std::exception &err) {}
	try {
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "Conversion to C OK => Base class is of type C\n" << std::endl;
		return ;
	} catch (std::exception &err) {}
	std::cout << "Base is NULL" << std::endl;
};