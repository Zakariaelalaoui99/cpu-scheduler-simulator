#ifndef SCHEDULING_ALGORITHM_H
#define SCHEDULING_ALGORITHM_H

#include <vector>
#include <string>
#include "Process.h"

class SchedulingAlgorithm {
public:
    virtual ~SchedulingAlgorithm() = default;

    // Must be implemented by subclasses
    virtual void execute(std::vector<Process>& processes) = 0;
    virtual std::string getName() const = 0;
};

#endif
