#include "Serializer.hpp"

int main (void) 
{
	Data	data;
	data.i = 33;
	data.str = "Et voila";

	std::cout << "--- Data structure infos ---" << std::endl;
	std::cout << "Adress : " << &data << std::endl;
	std::cout << "data.i : " << data.i << std::endl;
	std::cout << "data.string : " << data.str << std::endl << std::endl;

	Data *witness = &data;

	std::cout << "--- Witness structure infos ---" << std::endl;
	std::cout << "Adress : " << &witness << std::endl;
	std::cout << "witness->i: " << witness->i << std::endl;
	std::cout << "witness->string : " << witness->str << std::endl << std::endl;

	uintptr_t	serialized = Serializer::serialize(&data);

	std::cout << "Serialized number : " << serialized << std::endl << std::endl;

	Data *copy = Serializer::deserialize(serialized);
	//Data *copy = serialized; // ERROR !!

	std::cout << "--- Pointer Copy structure infos ---" << std::endl;
	std::cout << "Adress : " << &copy << std::endl;
	std::cout << "copy->i: " << copy->i << std::endl;
	std::cout << "copy->string : " << copy->str << std::endl << std::endl;

	return 0;
}