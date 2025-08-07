#include <iostream>
#include "CPU.h"
#include "Process.h"
#include "Thread.h"
#include "FCFSScheduler.h"
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
        MainWindow w;
        w.show();
        return app.exec();
    // Step 1: Create Scheduler
    FCFSScheduler scheduler;

    // Step 2: Create Processes & Threads
    Process* p1 = new Process(1, 0);
    p1->addThread(new Thread(101, 5, p1));
    p1->addThread(new Thread(102, 3, p1));

    Process* p2 = new Process(2, 2);
    p2->addThread(new Thread(201, 4, p2));

    // Step 3: Add to scheduler
    scheduler.addProcess(p1);
    scheduler.addProcess(p2);

    // Step 4: Create CPU
    CPU cpu;
}
