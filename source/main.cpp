#include <iostream>
#include <chrono>
#include "classExpeditionTimer.h"

int main() {
    auto startTime = std::chrono::steady_clock::now();
    auto currentTime = std::chrono::steady_clock::now();
    auto elapsedTime = std::chrono::duration<double>(currentTime - startTime);

    auto targetTime = std::chrono::duration<double>(3.0);

    while (elapsedTime < targetTime) {
        currentTime = std::chrono::steady_clock::now();
        elapsedTime = std::chrono::duration<double>(currentTime - startTime);
    }
    
    std::cout << "3 seconds passed";

    std::cout << targetTime << " " << elapsedTime << "\n";
    
    ExpeditionTimer TestTimerCurrent("Test Timer: Current Time");
    TestTimerCurrent.setStartTime();
    TestTimerCurrent.timerSleep(std::chrono::milliseconds(1600));
    TestTimerCurrent.setCurrentTime();
    std::cout << "Elapsed Time: " << TestTimerCurrent.getElapsedTime().count() << " seconds\n";
    

    return 0;
}