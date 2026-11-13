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
    setCurrentTime();
    elapsedTime = chrono::duration<double>(currentTime - startTime);
}

// return functions for three time variables
chrono::steady_clock::time_point ExpeditionTimer::getStartTime() {
    chrono::duration<double> startTimeClean = chrono::duration<double>(startTime);
    return startTimeMS;
}

chrono::steady_clock::time_point ExpeditionTimer::getCurrentTime() {
    return currentTime;
}

chrono::duration<double> ExpeditionTimer::getElapsedTime() {
    setElapsedTime(); 
    return elapsedTime;
}

void ExpeditionTimer::timerSleep(int duration) {
    this_thread::sleep_for(chrono::milliseconds(duration));
}