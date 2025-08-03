#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "Thread.h"
#include "Process.h"

class Scheduler {
public:
    virtual ~Scheduler() = default;

    // Add a new process (or its threads) to the ready queue
    virtual void addProcess(Process* process) = 0;

    // Return the next thread to execute, or nullptr if none available
    virtual Thread* getNextThread(int currentTime) = 0;

    // Optional: name of the scheduler (for logging/debugging)
    virtual const char* getName() const = 0;
};

#endif // SCHEDULER_H

