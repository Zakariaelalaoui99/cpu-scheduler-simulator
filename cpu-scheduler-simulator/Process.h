#ifndef PROCESS_H
#define PROCESS_H

#include <string>

class Process {
private:
    std::string id;
    int arrivalTime;
    int burstTime;
    int startTime;
    int finishTime;
    int turnaroundTime;
    int waitingTime;

public:
    Process();
    Process(const std::string& pid, int arrival, int burst);

    std::string getId() const;
    int getArrivalTime() const;
    int getBurstTime() const;
    int getStartTime() const;
    int getFinishTime() const;
    int getTurnaroundTime() const;
    int getWaitingTime() const;

    void setStartTime(int time);
    void setFinishTime(int time);
    void setTurnaroundTime(int time);
    void setWaitingTime(int time);

    void calculateTimes();
};

#endif
