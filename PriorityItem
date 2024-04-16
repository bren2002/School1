#ifndef PRIORITY_ITEM
#define PRIORITY_ITEM

#include <string>
#include <iostream>

using namespace std;

class PriorityItem {
private:
    int priority;
    string data;

public:
    PriorityItem(int pri, string priData) : priority(pri), data(priData) {}

    bool operator < (const PriorityItem& other) const {
        return priority < other.priority;
    }

    bool operator > (const PriorityItem& other) const {
        return priority > other.priority;
    }

    bool operator <= (const PriorityItem& other) const {
        return priority <= other.priority;
    }

    bool operator >= (const PriorityItem& other) const {
        return priority >= other.priority;
    }

    bool operator == (const PriorityItem& other) const {
        return priority == other.priority;
    }

    bool operator != (const PriorityItem& other) const {
        return priority != other.priority;
    }

    friend ostream& operator<<(ostream& os, const PriorityItem& pri) {
        os << "[priority=" << pri.priority << ", data=" << pri.data << "]";
        return os;
    }

    int getPriority() const {
        return priority;
    }

    string getData() const {
        return data;
    }
};

#endif

