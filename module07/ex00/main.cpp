#include "whatever.hpp"

// Ex::Ex() { return; };
// Ex::Ex(std::string str, int i) : _str(str), _i(i) { return; };
// Ex::Ex (const Ex & src) { return *this = src; };
// ~Ex::Ex() { return; };

// Ex & Ex::operator=(const Ex &rhs) {
// 	_str = rhs._str;
// 	_i = rhs._i;
// 	return *this;
// };

int main( void ) {
int a = 2;
int b = 3;

::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

// Ex xa("bak", 8);
// Ex xb("bak", 8);
// Ex xmin = min (xa, xb);
// if (xmin == xb)
// 	std::cout << "Yes" << std::cout;
// else
// 	std::cout << "No" << std::cout;

return 0;
}