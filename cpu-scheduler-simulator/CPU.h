#ifndef CPU_H
#define CPU_H

#include "Thread.h"

class CPU {
public:
    CPU();

    void execute(Thread* thread, int currentTime); // Start executing a thread
    void release();                                // Release the CPU
    bool isBusy() const;                           // Check if CPU is occupied
    Thread* getRunningThread() const;              // Access the currently running thread

private:
    Thread* runningThread; // nullptr if idle
    int startTime;         // Optional: time when execution started
};

#endif // CPU_H
