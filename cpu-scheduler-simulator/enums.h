#ifndef ENUMS_H
#define ENUMS_H

enum class EventType {
    PROCESS_ARRIVAL,
    THREAD_FINISH,
    TIME_QUANTUM_EXPIRED,
    THREAD_BLOCKED,
    THREAD_RESUMED
    // Add more types as needed
};

#endif // ENUMS_H
