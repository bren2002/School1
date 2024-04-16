#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "Heap.h"
#include <vector>
#include <algorithm> 

template <typename T>
std::vector<T> heapSort(const Heap<T>& heap, bool increasingOrder) {
    Heap<T> copyHeap(heap);
    std::vector<T> sorted;

    while (copyHeap.getSize() > 0) {
        sorted.push_back(copyHeap.remove());
    }

    if (!increasingOrder) {
        std::reverse(sorted.begin(), sorted.end());
    }

    return sorted;
}

#endif
