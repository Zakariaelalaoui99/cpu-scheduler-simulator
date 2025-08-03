#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <memory>
#include "Event.h"
#include "EventQueue.h"
#include "Scheduler.h"
#include "CPU.h"

class Simulator {
public:
    Simulator(std::shared_ptr<Scheduler> scheduler);

    void run();                     // Main simulation loop
    void scheduleEvent(const Event& event); // Add new event to the queue
    int getClock() const;          // Access current simulation time

private:
    int clock;                     // Simulation time
    EventQueue eventQueue;         // Priority queue of events
    std::shared_ptr<Scheduler> scheduler; // Scheduling algorithm
    CPU cpu;                       // Simulated CPU

    void dispatch(const Event& event); // Handle one event
};

#endif // SIMULATOR_H
