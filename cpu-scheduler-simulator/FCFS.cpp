#include "FCFS.h"
#include <algorithm>

void FCFS::execute(std::vector<Process>& processes) {
    std::sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        return a.getArrivalTime() < b.getArrivalTime();
    });

    int currentTime = 0;
    for (auto& p : processes) {
        if (currentTime < p.getArrivalTime()) {
            currentTime = p.getArrivalTime(); // Wait for the process to arrive
        }

        p.setStartTime(currentTime);
        currentTime += p.getBurstTime();
        p.setFinishTime(currentTime);
        p.calculateTimes();
    }
}
