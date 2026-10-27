#include <iostream>
#include <chrono>
#include "classExpeditionTimer.h"

int main() {
    auto startTime = std::chrono::steady_clock::now();
    auto currentTime = std::chrono::steady_clock::now();
    auto elapsedTime = std::chrono::duration<double>(currentTime - startTime);

    auto targetTime = std::chrono::duration<double>(5.0);

    while (elapsedTime < targetTime) {
        currentTime = std::chrono::steady_clock::now();
        elapsedTime = std::chrono::duration<double>(currentTime - startTime);
    }
    
    std::cout << "5 seconds passed";

    std::cout << targetTime << " " << elapsedTime << "\n";
    
    ExpeditionTimer TestTimer("Test Timer");
    TestTimer.setCurrentTime();
    auto nowRaw = TestTimer.getCurrentTime();
    auto nowClean = nowRaw.time_since_epoch().count();
    std::cout << "test timer: " << nowClean;

    return 0;
}