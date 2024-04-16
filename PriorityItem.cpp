#include "PriorityItem.h"
#include <string>  


PriorityItem::PriorityItem(int pri, std::string priData) : priority(pri), data(priData) {}

int PriorityItem::getPriority() const {
    return priority;
}

std::string PriorityItem::getData() const {
    return data;
}

bool PriorityItem::operator<(const PriorityItem& other) const {
    return priority < other.priority;
}

bool PriorityItem::operator>(const PriorityItem& other) const {
    return priority > other.priority;
}

bool PriorityItem::operator<=(const PriorityItem& other) const {
    return priority <= other.priority;
}

bool PriorityItem::operator>=(const PriorityItem& other) const {
    return priority >= other.priority;
}

bool PriorityItem::operator==(const PriorityItem& other) const {
    return priority == other.priority;
}

bool PriorityItem::operator!=(const PriorityItem& other) const {
    return priority != other.priority;
}

std::ostream& operator<<(std::ostream& os, const PriorityItem& pri) {
    os << "[priority=" << pri.getPriority() << ", data=" << pri.getData() << "]";
    return os;
}








