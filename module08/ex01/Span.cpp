#include "Span.hpp"

Span::Span() : _N(0), _tab(0) { return; }

Span::Span(unsigned int N) : _N(N) { 
	return;
}

Span::Span(Span const & src) {
	*this = src;
	return ;
}

Span & Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		_N = rhs._N;
		_tab = rhs._tab;
	}
	return *this;
};

Span::~Span() { return; }

unsigned int Span::getMaxLength() const {
	return _N;
};

void Span::addNumber(int n) {
	try {
		if (_tab.size() >= _N)
			throw MaxSizeException();
		_tab.push_back(n);
	}
	catch (MaxSizeException &e) {
		std::cerr << e.what() << std::endl;
		std::cout << "Cannot add " << n << ". Span container is full" << std::endl;
	}
};

void Span::addNumber(int n) {};

void Span::printTab() const {
	std::cout << "span container : ";
	for (size_t i = 0; i < _tab.size(); i++)
		std::cout << _tab.at(i) << ' ';
	std::cout << '\n';
};

int Span::shortestSpan() const {
	std::vector<int> tmp = _tab;
	std::sort(tmp.begin(), tmp.end());
	return *(tmp.begin() + 1) - * tmp.begin();
};

int Span::longestSpan() const {
	int min = *std::min_element(_tab.begin(), _tab.end());
	int max = *std::max_element(_tab.begin(), _tab.end());
	return max - min;
};

const char* Span::MaxSizeException::what() const throw() {
	return ("Max size container exception");
}