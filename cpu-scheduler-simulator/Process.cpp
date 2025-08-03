#include "Process.h"

Process::Process(int pid, int arrivalTime)
    : pid(pid), arrivalTime(arrivalTime) {}

int Process::getPid() const {
    return pid;
}

int Process::getArrivalTime() const {
    return arrivalTime;
}

void Process::addThread(Thread* thread) {
    threads.push_back(thread);
}

const std::vector<Thread*>& Process::getThreads() const {
    return threads;
}

Thread* Process::getNextReadyThread() const {
    for (Thread* thread : threads) {
        if (thread->getRemainingTime() > 0) {
            return thread;
        }
    }
    return nullptr; // All threads finished
}

