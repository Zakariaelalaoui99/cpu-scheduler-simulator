#include "Thread.h"

Thread::Thread(int tid, int burstTime, Process* parent)
    : tid(tid), burstTime(burstTime), remainingTime(burstTime), parent(parent) {}

int Thread::getTid() const {
    return tid;
}

int Thread::getBurstTime() const {
    return burstTime;
}

int Thread::getRemainingTime() const {
    return remainingTime;
}

void Thread::setRemainingTime(int time) {
    remainingTime = time;
}

void Thread::reduceRemainingTime(int amount) {
    remainingTime -= amount;
    if (remainingTime < 0) remainingTime = 0;
}

Process* Thread::getParentProcess() const {
    return parent;
}
