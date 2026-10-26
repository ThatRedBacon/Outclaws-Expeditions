#include "classExpeditionTimer.h"

// constructor
ExpeditionTimer::ExpeditionTimer(string timerName) {
    name = timerName;
    startTime = chrono::steady_clock::now();
    currentTime = chrono::steady_clock::now();
    elapsedTime = chrono::duration<double>(currentTime - startTime);
}

void setStartTime() {
    startTime = chrono::steady_clock::now();
}