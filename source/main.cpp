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
    TestTimerCurrent.setCurrentTime();
    auto nowRaw = TestTimerCurrent.getCurrentTime();
    std::chrono::duration<double> nowClean = nowRaw.time_since_epoch();
    std::cout << "test timer current time: " << nowClean.count();

    ExpeditionTimer TestTimer2("Test Timer: Timer 2, Elapsed Time Testing");
    TestTimer2.setStartTime();
    

    return 0;
}