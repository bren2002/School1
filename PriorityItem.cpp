#include "PriorityItem.h"

PriorityItem::PriorityItem(int pri, string priData) : priority(pri), data(priData) {}

int PriorityItem::getPriority() const {
    return priority;
}

string PriorityItem::getData() const {
    return data;
}

ostream& operator<<(ostream& os, const PriorityItem& pri) {
    os << "[priority=" << pri.priority << ", data=" << pri.data << "]";
    return os;
}

