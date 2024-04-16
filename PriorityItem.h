#ifndef PRIORITY_ITEM_H
#define PRIORITY_ITEM_H

#include <string>
#include <iostream>

using namespace std;

class PriorityItem {
private:
    int priority;
    string data;

public:
    PriorityItem(int pri, string priData);
    int getPriority() const;
    string getData() const;

    bool operator<(const PriorityItem& other) const;
    bool operator>(const PriorityItem& other) const;
    bool operator<=(const PriorityItem& other) const;
    bool operator>=(const PriorityItem& other) const;
    bool operator==(const PriorityItem& other) const;
    bool operator!=(const PriorityItem& other) const;

    friend ostream& operator<<(ostream& os, const PriorityItem& pri);
};

#endif

