#ifndef EVENTQUEUE_H
#define EVENTQUEUE_H

#include <queue>
#include "Event.h"

class EventQueue {
public:
    void add(const Event& event);   // Add an event to the queue
    Event pop();                    // Remove and return the next event
    bool empty() const;            // Check if queue is empty
    size_t size() const;           // Optional: get queue size

private:
    std::priority_queue<Event> queue;
};

#endif // EVENTQUEUE_H
