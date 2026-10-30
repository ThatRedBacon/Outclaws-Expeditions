#include <string>
#include <chrono>
using namespace std;

class ExpeditionTimer {
private:
    string timerName = "timer";
    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    chrono::steady_clock::time_point currentTime = chrono::steady_clock::now();
    chrono::duration<double> elapsedTime = chrono::duration<double>(0.0);
    
public:
    // constructor
    ExpeditionTimer(string inputName);

    // starts timer
    void setStartTime();

    // sets current time
    void setCurrentTime();

    // sets elapsed time
    void setElapsedTime();

    // return functions for three time variables
    chrono::steady_clock::time_point getStartTime();
    chrono::steady_clock::time_point getCurrentTime();
    chrono::duration<double> getElapsedTime();

    // timer sleeps for target milliseconds
    void timerSleep(chrono::milliseconds duration);
};