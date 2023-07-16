#include "PmergeMe.hpp"

std::vector<int> mergeVector (std::vector<int> & vec_a, std::vector<int> & vec_b) {
    std::vector<int> vec_c;

    while(vec_a.begin() != vec_a.end() && vec_b.begin() != vec_b.end())
    {
        
        if (vec_a[0] > vec_b[0]) {
            vec_c.push_back(vec_b[0]);
            vec_b.erase(vec_b.begin());
        }
        else {
            vec_c.push_back(vec_a[0]);
            vec_a.erase(vec_a.begin());
        }
    }

    while (vec_a.begin() != vec_a.end()) {
        vec_c.push_back(vec_a[0]);
        vec_a.erase(vec_a.begin());
    }

    while (vec_b.begin() != vec_b.end()) {
        vec_c.push_back(vec_b[0]);
        vec_b.erase(vec_b.begin());
    }

    return vec_c;
}

std::vector<int> mergeSortVetor(std::vector<int> & vec) {
    if (vec.size() == 1)
        return vec;
        
    std::vector<int> vec_a(vec.begin(), vec.begin() + vec.size()/2);
    std::vector<int> vec_b (vec.begin() + vec.size()/2, vec.end());
    vec_a = mergeSortVetor(vec_a);
    vec_b = mergeSortVetor(vec_b);

    return mergeVector(vec_a, vec_b);
}

std::list<int> mergeList (std::list<int> & lst_a, std::list<int> & lst_b) {
    std::list<int> lst_c;

    while(lst_a.begin() != lst_a.end() && lst_b.begin() != lst_b.end())
    {
        
        if (lst_a.front() > lst_b.front()) {
            lst_c.push_back(lst_b.front());
            lst_b.pop_front();
        }
        else {
            lst_c.push_back(lst_a.front());
            lst_a.pop_front();
        }
    }

    while (lst_a.begin() != lst_a.end()) {
        lst_c.push_back(lst_a.front());
        lst_a.pop_front();
    }

    while (lst_b.begin() != lst_b.end()) {
        lst_c.push_back(lst_b.front());
        lst_b.pop_front();
    }

    return lst_c;
}

std::list<int> mergeSortList(std::list<int> & lst) {
    if (lst.size() == 1)
        return lst;
    
    int stock[lst.size()];
    int i = 0;
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++) {
        stock[i] = *it;
        i++;
    }

    std::list<int> lst_a (stock, stock + sizeof(stock)/2 / sizeof(int));
    std::list<int> lst_b (stock + sizeof(stock)/2 / sizeof(int), stock + sizeof(stock) / sizeof(int));
    lst_a = mergeSortList(lst_a);
    lst_b = mergeSortList(lst_b);

    return mergeList(lst_a, lst_b);
}