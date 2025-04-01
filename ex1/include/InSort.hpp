#if !defined(INSERTION_HPP)
#define INSERTION_HPP

#include <vector>
#include <iostream>
#include "helpers.hpp"

void mine_insertion_sort(std::vector<int>* unsorted_list, bool print) {
    int len = (*unsorted_list).size();
    for (int i = 1; i < len; i++) {
        int j = i - 1;
        int a = (*unsorted_list).at(i);
        while (j >= 0 && greater_than((*unsorted_list).at(j), a)) {
            (*unsorted_list).at(j + 1) = (*unsorted_list).at(j);
            j--;
        }
        assign_val((*unsorted_list).at(j+1), a);
        if (print) {
            print_array(unsorted_list);
        }
    }
}


#endif // INSERTION_HPP
