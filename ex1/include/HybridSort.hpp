#if !defined(HYBRIDSORT_HPP)
#define HYBRIDSORT_HPP

#include <vector>
#include "InSort.hpp"
#include "QuickSort.hpp"

void hybrid_sort(std::vector<int>* unsorted_array, int length, int cutoff) {
    if (length < cutoff) {
        mine_insertion_sort(unsorted_array);
    }
    else {
        qs(unsorted_array, 0, length - 1);
    }
}


#endif // HYBRIDSORT_HPP
