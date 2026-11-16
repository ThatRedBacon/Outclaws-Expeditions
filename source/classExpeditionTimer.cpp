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
double ExpeditionTimer::getStartTime() const {
    auto startTimeClean = chrono::duration<double, std::milli>(
        startTime.time_since_epoch()
    );
    return startTimeClean.count();
}

chrono::steady_clock::time_point ExpeditionTimer::getCurrentTime() {
    return currentTime;
}

double ExpeditionTimer::getElapsedTime() {
    setElapsedTime(); 
    return elapsedTime.count();
}

void ExpeditionTimer::timerSleep(int duration) {
    this_thread::sleep_for(chrono::milliseconds(duration));
}