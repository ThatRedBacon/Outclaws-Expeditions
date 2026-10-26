#include "classExpeditionTimer.h"

// constructor
ExpeditionTimer::ExpeditionTimer(string inputName) : timerName(inputName) {
    startTime = chrono::steady_clock::now();
    currentTime = chrono::steady_clock::now();
    elapsedTime = chrono::duration<double>(currentTime - startTime);
}

void setStartTime() {
    startTime = chrono::steady_clock::now();
}

void setCurrentTime() {
    currentTime = chrono::steady_clock::now();
}

void setElapsedTime() {
    elapsedTime = chrono::duration<double>(currentTime - startTime);

// return functions for three time variables
chrono::steady_clock::time_point getStartTime() {
    return startTime;

chrono::steady_clock::time_point getCurrentTime() {
    return currentTime;

chrono::duration<double> getElapsedTime() {
    return elapsedTime;

}