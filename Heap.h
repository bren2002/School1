#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "Heap.h"
#include <vector>
using namespace std;

template <typename T>
vector<T> heapSort(Heap<T> heap, bool increasingOrder) {
    vector<T> sorted;
    while (heap.getSize() > 0) {
        sorted.push_back(heap.remove());
    }
    if (!increasingOrder) {
        reverse(sorted.begin(), sorted.end());
    }
    return sorted;
}

#endif
