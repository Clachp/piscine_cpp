#include "Span.hpp"

Span::Span() : _N(0), _tab(0) { 
	return;
}
Span::Span(unsigned int N) : _N(N) {
	return;
}
Span::Span(Span const &src) {
	*this = src;
	return;
}
Span::~Span() { 
	return;
}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		_N = rhs._N;
		_tab = rhs._tab;
	}
	return *this;
};


unsigned int Span::getMaxLength() const {
	return _N;
};

void Span::addNumber(int n) {
	try {
		if (_tab.size() >= _N)
			throw MaxSizeException();
		_tab.push_back(n);
	}
	catch (MaxSizeException &e)	{
		std::cerr << "ERROR : " << e.what() << std::endl;
		std::cout << "Cannot add " << n << "\nSpan container is full" << std::endl;
	}
};

void Span::addNumber(void) {
	std::srand(time(NULL));
	int *mirror = new int[_N];
	for (size_t i = 0; i < _N; i++) {
        const int value = rand() % 50;
        mirror[i] = value;
    }
	_tab.erase(_tab.begin(), _tab.end());
	_tab.insert(_tab.begin(), mirror, mirror + _N);
	delete[] mirror;
}

void Span::printTab() const {
	std::cout << "span container : ";
	for (size_t i = 0; i < _tab.size(); i++)
		std::cout << _tab.at(i) << ' ';
	std::cout << '\n';
};

int Span::shortestSpan() const {
	try {
		if (_tab.size() <= 1)
			throw DistanceException();
		std::vector<int> tmp = _tab;
		std::sort(tmp.begin(), tmp.end());
		return *(tmp.begin() + 1) - *tmp.begin();
	}
	catch (DistanceException &e) {
		std::cerr << "ERROR : " << e.what() << " : ";
		std::cout << "Span container to short" << std::endl;
	}
	return 0;
};

int Span::longestSpan() const {
	try {
		if (_tab.size() <= 1)
			throw DistanceException();
		int min = *std::min_element(_tab.begin(), _tab.end());
		int max = *std::max_element(_tab.begin(), _tab.end());
		return max - min;
	}
	catch (DistanceException &e) {
		std::cerr << "ERROR : " << e.what() << " : ";
		std::cout << "Span container to short" << std::endl;
	}
	return 0;
};

const char *Span::MaxSizeException::what() const throw() {
	return ("Max size container exception");
}

const char *Span::DistanceException::what() const throw() {
	return ("Distance exception");
}