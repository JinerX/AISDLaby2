#if !defined(QUICKSORT_HPP)
#define QUICKSORT_HPP

#include <vector>
#include "helpers.hpp"

int my_partition(std::vector<int>* list, int lo, int hi) {
    int pivot = (*list).at(lo);
    int i = lo - 1;
    int j = hi + 1;

    while (true) {
        do
        {
            i++;
        } while (less_than((*list).at(i), pivot));

        do
        {
            j--;
        } while (greater_than((*list).at(j), pivot));
        
        if (i >= j) {
            return j;
        }

        swap_vals((*list).at(i),(*list).at(j));
    }   
}

void qs(std::vector<int>* unsorted_list, int lo, int hi, bool print) {
    if (lo < hi) {
        int p = my_partition(unsorted_list, lo, hi);
        if (print) {
            print_array(unsorted_list);
        }
        qs(unsorted_list, lo, p, print);
        qs(unsorted_list, p + 1, hi, print);
    }
}




#endif // QUICKSORT_HPP
