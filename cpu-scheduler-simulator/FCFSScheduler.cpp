#include "FCFSScheduler.h"
#include <iostream>

void FCFSScheduler::addProcess(Process* process) {
    for (Thread* thread : process->getThreads()) {
        if (thread->getRemainingTime() > 0) {
            readyQueue.push(thread);
            std::cout << "[Scheduler:FCFS] Thread " << thread->getTid()
                      << " from Process " << process->getPid()
                      << " added to ready queue\n";
        }
    }
}

Thread* FCFSScheduler::getNextThread(int currentTime) {
    if (readyQueue.empty()) return nullptr;

    Thread* next = readyQueue.front();
    readyQueue.pop();

    std::cout << "[Scheduler:FCFS] Dispatching Thread " << next->getTid()
              << " at time " << currentTime << "\n";
    return next;
}

const char* FCFSScheduler::getName() const {
    return "First-Come-First-Serve";
}
