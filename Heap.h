#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <stdexcept>

template<typename T>
class Heap {
public:
    Heap();
    explicit Heap(bool isMinHeap);
    Heap(const T elements[], int arraySize);
    void add(const T& element);
    T remove();
    int getSize() const;

private:
    std::vector<T> v;
    bool isMinHeap = false;
    void _swap(int idx1, int idx2);
    void upHeapify(int idx);
    void downHeapify(int idx);
};

template<typename T>
Heap<T>::Heap() {}

template<typename T>
Heap<T>::Heap(bool isMinHeap) : isMinHeap(isMinHeap) {}

template<typename T>
Heap<T>::Heap(const T elements[], int arraySize) {
    for (int i = 0; i < arraySize; ++i) {
        v.push_back(elements[i]);
    }
    for (int i = arraySize / 2 - 1; i >= 0; --i) {
        downHeapify(i);
    }
}

template<typename T>
void Heap<T>::add(const T& element) {
    v.push_back(element);
    upHeapify(v.size() - 1);
}

template<typename T>
T Heap<T>::remove() {
    if (v.empty()) {
        throw std::runtime_error("Heap is empty. Cannot remove.");
    }
    T element = v.front();
    v.front() = v.back();
    v.pop_back();
    downHeapify(0);
    return element;
}

template<typename T>
int Heap<T>::getSize() const {
    return v.size();
}

template<typename T>
void Heap<T>::_swap(int idx1, int idx2) {
    T temp = v[idx1];
    v[idx1] = v[idx2];
    v[idx2] = temp;
}

template<typename T>
void Heap<T>::upHeapify(int idx) {
    while (idx > 0) {
        int parent = (idx - 1) / 2;
        if ((isMinHeap && v[idx] < v[parent]) || (!isMinHeap && v[idx] > v[parent])) {
            _swap(idx, parent);
            idx = parent;
        } else {
            break;
        }
    }
}

template<typename T>
void Heap<T>::downHeapify(int idx) {
    while (true) {
        int left = 2 * idx + 1;
        int right = 2 * idx + 2;
        int minIdx = idx;
        if (left < v.size() && ((isMinHeap && v[left] < v[minIdx]) || (!isMinHeap && v[left] > v[minIdx]))) {
            minIdx = left;
        }
        if (right < v.size() && ((isMinHeap && v[right] < v[minIdx]) || (!isMinHeap && v[right] > v[minIdx]))) {
            minIdx = right;
        }
        if (minIdx != idx) {
            _swap(idx, minIdx);
            idx = minIdx;
        } else {
            break;
        }
    }
}

#endif



