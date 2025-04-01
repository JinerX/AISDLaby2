#if !defined(HYBRIDSORT_HPP)
#define HYBRIDSORT_HPP

#include <vector>
#include "InSort.hpp"
#include "QuickSort.hpp"
#include "helpers.hpp"

void hybrid_sort(std::vector<int>* unsorted_array, int lo, int hi, int threshold, bool print) {
    if(lo < hi) {
        if (hi - lo + 1 <= threshold) {
            for (int i = 1; i < hi; i++) {
                int j = i - 1;
                int a = (*unsorted_array).at(i);
                while (j >= 0 && greater_than((*unsorted_array).at(j), a)) {
                    assign_val((*unsorted_array).at(j + 1), (*unsorted_array).at(j));
                    j--;
                }
                assign_val((*unsorted_array).at(j+1), a);
                print_array(unsorted_array);
            }
            return;
        }
        int p = my_partition(unsorted_array,lo, hi);
        if (print) {
            print_array(unsorted_array);
        }
        hybrid_sort(unsorted_array,lo,p, threshold, print);
        hybrid_sort(unsorted_array,p+1, hi, threshold, print);
    }
}


#endif // HYBRIDSORT_HPP
