#include <iostream>
#include <vector>
#include "Process.h"
#include "FCFS.h"

int main() {
    std::vector<Process> processes = {
        Process("P1", 0, 4),
        Process("P2", 2, 3),
        Process("P3", 3, 1)
    };

    FCFS fcfs;
    fcfs.execute(processes);

    for (const auto& p : processes) {
        std::cout << "Process " << p.getId()
                  << " | Start: " << p.getStartTime()
                  << " | Finish: " << p.getFinishTime()
                  << " | Waiting: " << p.getWaitingTime()
                  << " | Turnaround: " << p.getTurnaroundTime()
                  << std::endl;
    }

    return 0;
}

