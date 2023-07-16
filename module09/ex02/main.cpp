#include "PmergeMe.hpp"

std::deque<int> getInput(int argc, char **argv) {
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
    try {
        while (iss >> check_int) {
            num = std::atoi(check_int.c_str());
            if (check_int != "0" && num <= 0) {
                inputSeq.clear();
                throw std::exception();
            }
            inputSeq.push_back(num);
        }
    } catch (std::exception &e) {
        std::cout << "Error: " << check_int << " is not a positive integer\n";
    };
    return inputSeq;
}


int main (int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << "ERRoR\n";
        return 1;
    }

    std::deque<int> inputSeq = getInput(argc, argv);
    if (inputSeq.empty())
        return 1;
    std::vector<int> vec;
    std::list<int> lst;

    std::cout << "Before: ";
    for (std::deque<int>::iterator it = inputSeq.begin(); it != inputSeq.end(); ++it) {
        std::cout << ' ' << *it;
        vec.push_back(*it);
        lst.push_back(*it);
    }
    std::cout << std::endl;

    timeval startTime, endTime_vec, endTime_lst;
    gettimeofday(&startTime, NULL);

    vec = mergeSortVetor(vec);
    gettimeofday(&endTime_vec, NULL);
    double duration_vec = (endTime_vec.tv_sec - startTime.tv_sec) * 1000000.0 + (endTime_vec.tv_usec - startTime.tv_usec);

    lst = mergeSortList(lst);
    gettimeofday(&endTime_lst, NULL);
    double duration_lst = (endTime_lst.tv_sec - startTime.tv_sec) * 1000000.0 + (endTime_lst.tv_usec - startTime.tv_usec);

    std::cout << "After: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << inputSeq.size() << " elements with std::vector : " << duration_vec << " us\n";
    std::cout << "Time to process a range of " << inputSeq.size() << " elements with std::lst : " << duration_lst << " us\n";

    return 0;
}