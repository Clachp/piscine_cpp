#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();

		Span & operator=(const Span &rhs);

		unsigned int getMaxLength() const;
		void getTab() const;
		void printTab() const;

		void addNumber(int n);
		void addNumber();
		int shortestSpan() const;
		int longestSpan() const;

		class MaxSizeException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		unsigned int _N;
		std::vector<int> _tab;
};

#endif