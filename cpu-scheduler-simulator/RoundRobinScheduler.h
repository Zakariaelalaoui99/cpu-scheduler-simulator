#ifndef ROUNDROBINSCHEDULER_H
#define ROUNDROBINSCHEDULER_H

#include <queue>
#include "Scheduler.h"

class RoundRobinScheduler : public Scheduler {
public:
    explicit RoundRobinScheduler(int quantum);

    void addProcess(Process* process) override;
    Thread* getNextThread(int currentTime) override;
    const char* getName() const override;

    int getTimeQuantum() const;

private:
    int timeQuantum;
    std::queue<Thread*> readyQueue;
};

#endif // ROUNDROBINSCHEDULER_H
