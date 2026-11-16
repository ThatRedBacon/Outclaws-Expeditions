#include <iostream>
#include <chrono>
#include "classExpeditionTimer.h"
using namespace std;

int main() {
    
    ExpeditionTimer timer("Test Timer");
    std::cout << "Starting timer." << std::endl;
    timer.setStartTime();
    std::cout << "Start time: " << timer.getStartTime() << std::endl;

    std::cout << "Setting target time." << std::endl;
    auto target = 1;
    std::cout << "Target time: " << target << std::endl;
    
    std::cout << "Beginning main timer loop..." << std::endl;
    auto counter = 0;
    while (timer.getElapsedTime() < target) {
        timer.timerSleep(500);
        timer.setElapsedTime();
        counter += 1;
    }
    std::cout << "Timer loop complete." << std::endl;
    std::cout << "Times iteration checked: " << counter << std::endl;

    return 0;
}