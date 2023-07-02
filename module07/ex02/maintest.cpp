#include <iostream>
#include "Array.tpp"

#define MAX_VAL 10
int main(int, char**)
{
    // Initiating an Array class "numbers" with int type and an array of int "mirror" 
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)   {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    std::cout << "--- PRINT NUMBERS ARRAY class ---\n";
    numbers.printArray();
    std::cout << "--- PRINT MIRROR ARRAY of integers ---\n";
    iter<int>(mirror, MAX_VAL, printElem<int>);

    // Testing copy operator= and copy constructor
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    std::cout << "--- PRINT TMP ---\n";
    tmp.printArray();
    std::cout << "--- PRINT TEST ---\n";
    test.printArray();

    // Testing error handling
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    // Testing operator[]
    try {
        numbers[-2] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL - 1] = 0;
        std::cout << "---- PRINT NUMBERS ---\n";
        numbers.printArray();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    std::cout << "---- PRINT NUMBERS ---\n";
    numbers.printArray();
    delete [] mirror;
    return 0;
}