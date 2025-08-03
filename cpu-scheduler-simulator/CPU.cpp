#include "CPU.h"
#include <iostream>

CPU::CPU() : runningThread(nullptr), startTime(0) {}

void CPU::execute(Thread* thread, int currentTime) {
    runningThread = thread;
    startTime = currentTime;

    std::cout << "[CPU] Started executing Thread " << thread->getTid()
              << " (Remaining time: " << thread->getRemainingTime() << ")\n";
}

void CPU::release() {
    if (runningThread != nullptr) {
        std::cout << "[CPU] Released Thread " << runningThread->getTid() << "\n";
        runningThread = nullptr;
    }
}

bool CPU::isBusy() const {
    return runningThread != nullptr;
}

Thread* CPU::getRunningThread() const {
    return runningThread;
}
