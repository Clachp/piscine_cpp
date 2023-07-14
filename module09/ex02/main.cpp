#include "PmergeMe.hpp"

int main (int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << "ERRoR\n";
        return 1;
    }

    std::string concat_args;
    for (int i = 1; i < argc; i++) {
        concat_args += argv[i];
        if (i < argc - 1)
            concat_args += " ";
    }
    
    std::istringstream iss(concat_args);
    int num;
    std::string check_int;
    std::deque<int> inputSeq;
    while (iss >> check_int) {
        num = std::atoi(check_int.c_str());
        if (check_int != "0" && num <= 0) {
            std::cout << "Error: " << check_int << " is not a positive integer\n";
            return 1;
        }
        inputSeq.push_back(num);
    }

    std::vector<int> vec;

    std::cout << "Before: ";
    for (std::deque<int>::iterator it = inputSeq.begin(); it != inputSeq.end(); ++it) {
        std::cout << ' ' << *it;
        vec.push_back(*it);
        // inputSeq.erase(it);
    }
    std::cout << std::endl;

    std::cout << "Vec before: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;

    vec = mergeSortVetor(vec);

    std::cout << "Vec after: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;


    return 0;


}