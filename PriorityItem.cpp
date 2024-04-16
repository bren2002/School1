#include "PriorityItem.h"
#include <iostream> 

PriorityItem::PriorityItem(int pri, std::string priData) : priority(pri), data(priData) {}

int PriorityItem::getPriority() const {
    return priority;
}

std::string PriorityItem::getData() const {
    return data;
}

std::ostream& operator<<(std::ostream& os, const PriorityItem& pri) {
    os << "[priority=" << pri.getPriority() << ", data=" << pri.getData() << "]";
    return os;
}


