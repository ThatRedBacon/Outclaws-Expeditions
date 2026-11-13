#include <iostream>
#include <chrono>
#include "classExpeditionTimer.h"
using namespace std;

int main() {
    
    ExpeditionTimer timer("Test Timer");
    std::cout << "Starting timer." << std::endl;
    timer.setStartTime();
    auto startTime = timer.getStartTime().time_since_epoch();
    std::cout << "Start time: " << startTime << std::endl;

    std::cout << "Setting target." << "\n";
    auto target = chrono::seconds(6);

    std::cout << "Beginning main timer loop..." << std::endl;

    while (timer.getElapsedTime() < target) {
        // std::cout << "Target: " << target << " | Elasped Time: " << timer.getElapsedTime();
        timer.timerSleep(6);
        timer.setElapsedTime();
    }
    std::cout << "Timer loop complete." << std::endl;


    return 0;
}