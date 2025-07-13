#include "Process.h"

// Default constructor
Process::Process()
    : id(""), arrivalTime(0), burstTime(0),
      startTime(-1), finishTime(-1),
      turnaroundTime(0), waitingTime(0) {}

// Parameterized constructor
Process::Process(const std::string& pid, int arrival, int burst)
    : id(pid), arrivalTime(arrival), burstTime(burst),
      startTime(-1), finishTime(-1),
      turnaroundTime(0), waitingTime(0) {}

// Getters
std::string Process::getId() const { return id; }
int Process::getArrivalTime() const { return arrivalTime; }
int Process::getBurstTime() const { return burstTime; }
int Process::getStartTime() const { return startTime; }
int Process::getFinishTime() const { return finishTime; }
int Process::getTurnaroundTime() const { return turnaroundTime; }
int Process::getWaitingTime() const { return waitingTime; }

// Setters
void Process::setStartTime(int time) { startTime = time; }
void Process::setFinishTime(int time) { finishTime = time; }
void Process::setTurnaroundTime(int time) { turnaroundTime = time; }
void Process::setWaitingTime(int time) { waitingTime = time; }

// Calculate TAT and WT
void Process::calculateTimes() {
    turnaroundTime = finishTime - arrivalTime;
    waitingTime = turnaroundTime - burstTime;
}
