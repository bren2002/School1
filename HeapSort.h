#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "Heap.h"
#include <vector>
#include <algorithm> // for reverse
using namespace std;

template <typename T>
vector<T> heapSort(const Heap<T>& heap, bool increasingOrder) {
    Heap<T> copyHeap(heap); 
    vector<T> sorted;
    
    while (copyHeap.getSize() > 0) {
        sorted.push_back(copyHeap.remove());
    }
    
    if (!increasingOrder) {
        reverse(sorted.begin(), sorted.end());
    }
    
    return sorted;
}

#endif
