#include "classExpeditionTimer.h"
#include <thread>
using namespace std;

// constructor
ExpeditionTimer::ExpeditionTimer(string inputName) : timerName(inputName) {
    startTime = chrono::steady_clock::now();
    currentTime = chrono::steady_clock::now();
    elapsedTime = chrono::duration<double>(currentTime - startTime);
}

void ExpeditionTimer::setStartTime() {
    startTime = chrono::steady_clock::now();
}

void ExpeditionTimer::setCurrentTime() {
    currentTime = chrono::steady_clock::now();
}

void ExpeditionTimer::setElapsedTime() {
    elapsedTime = chrono::duration<double>(currentTime - startTime);
}

// return functions for three time variables
chrono::steady_clock::time_point ExpeditionTimer::getStartTime() {
    return startTime;
}

chrono::steady_clock::time_point ExpeditionTimer::getCurrentTime() {
    return currentTime;
}

chrono::duration<double> ExpeditionTimer::getElapsedTime() {
    return elapsedTime;
}

void ExpeditionTimer::timerSleep(chrono::milliseconds duration) {
    this_thread::sleep_for(duration);
}