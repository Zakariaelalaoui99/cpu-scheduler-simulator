#ifndef EVENT_H
#define EVENT_H

#include <memory>
#include "enums.h" // Contains enum class EventType
#include "Process.h"
#include "Thread.h"

class Event {
public:
    Event(int time, EventType type, Process* process, Thread* thread);

    int getTime() const;
    EventType getType() const;
    Process* getProcess() const;
    Thread* getThread() const;

    // Comparison operator for priority queue (min-heap)
    bool operator<(const Event& other) const;

private:
    int time;
    EventType type;
    Process* process;
    Thread* thread;
};

#endif // EVENT_H
