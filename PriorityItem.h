#ifndef PRIORITY_ITEM_H
#define PRIORITY_ITEM_H

#include <string>  
#include <iostream>
#include <vector>  

class PriorityItem {
private:
    int priority;
    std::string data;

public:
    PriorityItem(int pri, std::string priData);
    int getPriority() const;
    std::string getData() const;

    bool operator<(const PriorityItem& other) const;
    bool operator>(const PriorityItem& other) const;
    bool operator<=(const PriorityItem& other) const;
    bool operator>=(const PriorityItem& other) const;
    bool operator==(const PriorityItem& other) const;
    bool operator!=(const PriorityItem& other) const;

    friend std::ostream& operator<<(std::ostream& os, const PriorityItem& pri);
};

#endif




