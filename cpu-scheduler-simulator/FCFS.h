#ifndef FCFS_H
#define FCFS_H

#include "SchedulingAlgorithm.h"

class FCFS : public SchedulingAlgorithm {
public:
    void execute(std::vector<Process>& processes) override;
    std::string getName() const override { return "FCFS"; }
};

#endif
