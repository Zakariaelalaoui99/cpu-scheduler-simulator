#include "Simulator.h"
#include <iostream>

Simulator::Simulator(std::shared_ptr<Scheduler> scheduler)
    : clock(0), scheduler(std::move(scheduler)) {}

int Simulator::getClock() const {
    return clock;
}

void Simulator::scheduleEvent(const Event& event) {
    eventQueue.add(event);
}

void Simulator::run() {
    while (!eventQueue.empty()) {
        Event event = eventQueue.pop();
        clock = event.getTime(); // advance simulation time
        dispatch(event);
    }

    std::cout << "Simulation completed at time: " << clock << std::endl;
}

void Simulator::dispatch(const Event& event) {
    switch (event.getType()) {
        case EventType::PROCESS_ARRIVAL: {
            Process* process = event.getProcess();
            Thread* thread = event.getThread();
            scheduler->addProcess(process); // For kernel-level, this could be addThread(thread)
            std::cout << "[Time " << clock << "] Process " << process->getPid()
                      << " arrived with Thread " << thread->getTid() << std::endl;

            if (!cpu.isBusy()) {
                Thread* next = scheduler->getNextThread(clock);
                if (next) {
                    cpu.execute(next, clock);
                    scheduleEvent(Event(clock + next->getRemainingTime(), EventType::THREAD_FINISH, next->getParentProcess(), next));
                }
            }
            break;
        }

        case EventType::THREAD_FINISH: {
            Thread* thread = event.getThread();
            std::cout << "[Time " << clock << "] Thread " << thread->getTid()
                      << " of Process " << thread->getParentProcess()->getPid() << " finished\n";

            cpu.release();

            Thread* next = scheduler->getNextThread(clock);
            if (next) {
                cpu.execute(next, clock);
                scheduleEvent(Event(clock + next->getRemainingTime(), EventType::THREAD_FINISH, next->getParentProcess(), next));
            }

            break;
        }

        // Add other event types as needed (e.g., TIME_QUANTUM_EXPIRED, THREAD_BLOCK, etc.)

        default:
            std::cerr << "Unknown event type encountered.\n";
            break;
    }
}
