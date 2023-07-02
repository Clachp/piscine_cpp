#include "Array.tpp"

int main (void)
{
    int *a = new int();
    std::cout << "*a = " << *a << std::endl;

    Array<int> tabInt(8);
    std::cout << tabInt.size() << std::endl;
    Array<char> charTab;
    charTab.fill('g');


    delete a;
    return 0;
}