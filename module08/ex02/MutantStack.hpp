#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() { };
		MutantStack(MutantStack const &src) : std::stack<T>(src) { 
			*this = src;
		};
		~MutantStack() { };

		MutantStack & operator=(const MutantStack &rhs) {
			if (this != rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin() { 		
			return std::stack<T>::c.begin(); 		
		}
		iterator end() {
			return std::stack<T>::c.end();
		}
		reverse_iterator rbegin() { 
			return std::stack<T>::c.rbegin();
		}
		reverse_iterator rend() { 
			return std::stack<T>::c.rend(); 
		}
		const_iterator cbegin() { 
			return std::stack<T>::c.begin(); 
		}
		const_iterator cend() { 
			return std::stack<T>::c.end();
		}
		const_reverse_iterator crbegin() { 
			return std::stack<T>::c.rbegin();
		}
		const_reverse_iterator crend() { 
			return std::stack<T>::c.rend();
		}
		
		void printStack(MutantStack<T>::iterator const & begin, MutantStack<T>::const_iterator const & end) const;
		void reversePrintStack(MutantStack<T>::reverse_iterator const & rbegin, MutantStack<T>::const_reverse_iterator const & rend) const;
};	

#endif