#include "Array.tpp"

int main (void)
{
    int *a = new int();
    std::cout << "*a = " << *a << std::endl;

    Array<int> tabInt(6);
    std::cout << tabInt.size() << std::endl;
    delete a;
    return 0;
}