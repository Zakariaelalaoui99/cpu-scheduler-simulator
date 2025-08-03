#include "EventQueue.h"
#include <stdexcept>

void EventQueue::add(const Event& event) {
    queue.push(event);
}

Event EventQueue::pop() {
    if (queue.empty()) {
        throw std::out_of_range("EventQueue is empty");
    }

    Event next = queue.top();
    queue.pop();
    return next;
}

bool EventQueue::empty() const {
    return queue.empty();
}

size_t EventQueue::size() const {
    return queue.size();
}
