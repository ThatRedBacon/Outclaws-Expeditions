#include <iostream>
#include <chrono>
#include "classExpeditionTimer.h"
using namespace std;

int main() {
    
    ExpeditionTimer timer("Test Timer");
    std::cout << "Starting timer." << std::endl;
    timer.setStartTime();

    std::cout << "Setting target time." << std::endl;
    auto target = 3;
    
    std::cout << "Beginning main timer loop..." << std::endl;
    while (timer.getElapsedTime() < target) {
        // std::cout << "Target: " << target << " | Elasped Time: " << timer.getElapsedTime();
        timer.timerSleep(6);
        timer.setElapsedTime();
    }
    std::cout << "Timer loop complete." << std::endl;


    return 0;
}