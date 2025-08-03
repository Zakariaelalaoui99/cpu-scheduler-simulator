#ifndef PROCESS_H
#define PROCESS_H

#include <vector>
#include "Thread.h"

class Thread; // forward declaration

class Process {
public:
    Process(int pid, int arrivalTime);

    int getPid() const;
    int getArrivalTime() const;

    void addThread(Thread* thread);
    const std::vector<Thread*>& getThreads() const;

    // Optional: helper to find the next ready thread
    Thread* getNextReadyThread() const;

private:
    int pid;
    int arrivalTime;
    std::vector<Thread*> threads;
};

#endif // PROCESS_H
