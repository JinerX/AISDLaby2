#if !defined(QUICKSORT_HPP)
#define QUICKSORT_HPP

#include <vector>

int my_partition(std::vector<int>* list, int lo, int hi) {
    int pivot = (*list).at(lo);
    int i = lo - 1;
    int j = hi + 1;

    while (true) {
        do
        {
            i++;
        } while ((*list).at(i) < pivot);

        do
        {
            j--;
        } while ((*list).at(j) > pivot);
        
        if (i >= j) {
            return j;
        }

        int tmp = (*list).at(i);
        (*list).at(i) = (*list).at(j);
        (*list).at(j) = tmp;
    }   
}

void qs(std::vector<int>* unsorted_list, int lo, int hi) {
    if (lo < hi) {
        int p = my_partition(unsorted_list, lo, hi);
        qs(unsorted_list, lo, p);
        qs(unsorted_list, p + 1, hi);
    }
}




#endif // QUICKSORT_HPP
