#ifndef THREAD_H
#define THREAD_H

#include "Process.h"

class Process; // forward declaration

class Thread {
public:
    Thread(int tid, int burstTime, Process* parent);

    int getTid() const;
    int getBurstTime() const;
    int getRemainingTime() const;
    void setRemainingTime(int time);
    void reduceRemainingTime(int amount);

    Process* getParentProcess() const;

private:
    int tid;
    int burstTime;
    int remainingTime;
    Process* parent;
};

#endif // THREAD_H
