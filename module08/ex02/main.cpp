#include "MutantStack.hpp"
#include <list>

template <typename T>
void MutantStack<T>::printStack (MutantStack<T>::iterator const & begin, MutantStack<T>::const_iterator const & end) const {
	MutantStack<T>::iterator b = begin;
	std::cout << "----" << std::endl;
	while (b != end) {
	std::cout << *b << std::endl;
	++b;
	}
	std::cout << "----" << std::endl;
};

template <typename T>
void MutantStack<T>::reversePrintStack(MutantStack<T>::reverse_iterator const & rbegin, MutantStack<T>::const_reverse_iterator const & rend) const {
	MutantStack<T>::reverse_iterator rb = rbegin;
	std::cout << "----" << std::endl;
	while (rb != rend) {
	std::cout << *rb << std::endl;
	++rb;
	}
	std::cout << "----" << std::endl;
};

int main()
{
	std::cout << "--- mutantstack ---" << std::endl;
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(100);
	mstack.printStack(mstack.begin(), mstack.end());
	std::cout << "On top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "On top after pop : " << mstack.top() << std::endl;
	std::cout << "Stack size : " << mstack.size() << std::endl;
	std::cout << std::endl;
	mstack.printStack(mstack.begin(), mstack.end());
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);


	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::const_iterator ite = mstack.end();
	std::cout << "print" << std::endl;
	mstack.printStack(mstack.begin(), mstack.end());
	std::cout << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator rite = mstack.rend();
	std::cout << "reverse print" << std::endl;
	mstack.reversePrintStack(rit, rite);

	++it;
	--it;
	std::cout << "print" << std::endl;
	mstack.printStack(it, ite);
	std::cout << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "--- list ---" << std::endl;
	
	std::list<int> lst;
	
	lst.push_back(5);
	lst.push_back(17);
	
	std::cout << lst.front() << std::endl;
	
	lst.pop_back();
	
	std::cout << lst.size() << std::endl;
	
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);
	
	int *i = &lst.front();
	int *ie = &lst.back();
	
	++i;
	--i;
	while (i != ie) {
		std::cout << i << std::endl;
		++i;
	}
	//std::stack<int> s(lst);
	return 0;
}