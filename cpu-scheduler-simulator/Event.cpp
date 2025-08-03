#include "Event.h"

Event::Event(int time, EventType type, Process* process, Thread* thread)
    : time(time), type(type), process(process), thread(thread) {}

int Event::getTime() const {
    return time;
}

EventType Event::getType() const {
    return type;
}

Process* Event::getProcess() const {
    return process;
}

Thread* Event::getThread() const {
    return thread;
}

// For priority queue (lower time has higher priority)
bool Event::operator<(const Event& other) const {
    return time > other.time; // Note: reversed for std::priority_queue (max-heap by default)
}
