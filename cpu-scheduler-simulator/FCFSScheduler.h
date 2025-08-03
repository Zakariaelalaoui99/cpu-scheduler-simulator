#ifndef FCFSSCHEDULER_H
#define FCFSSCHEDULER_H

#include <queue>
#include "Scheduler.h"

class FCFSScheduler : public Scheduler {
public:
    void addProcess(Process* process) override;
    Thread* getNextThread(int currentTime) override;
    const char* getName() const override;

private:
    std::queue<Thread*> readyQueue;
};

#endif // FCFSSCHEDULER_H

