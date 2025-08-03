#include "RoundRobinScheduler.h"
#include <iostream>

RoundRobinScheduler::RoundRobinScheduler(int quantum)
    : timeQuantum(quantum) {}

void RoundRobinScheduler::addProcess(Process* process) {
    for (Thread* thread : process->getThreads()) {
        if (thread->getRemainingTime() > 0) {
            readyQueue.push(thread);
            std::cout << "[Scheduler:RR] Thread " << thread->getTid()
                      << " from Process " << process->getPid()
                      << " added to ready queue\n";
        }
    }
}

Thread* RoundRobinScheduler::getNextThread(int currentTime) {
    if (readyQueue.empty()) return nullptr;

    Thread* next = readyQueue.front();
    readyQueue.pop();

    std::cout << "[Scheduler:RR] Dispatching Thread " << next->getTid()
              << " at time " << currentTime << "\n";
    return next;
}

const char* RoundRobinScheduler::getName() const {
    return "Round Robin";
}

int RoundRobinScheduler::getTimeQuantum() const {
    return timeQuantum;
}
