#include <string>
#include <chrono>
using namespace std;

class ExpeditionTimer {
    private:
        string name;
        chrono::steady_clock::time_point startTime;
        chrono::steady_clock::time_point currentTime;
        chrono::duration<double> elapsedTime;
    
    public:
        // constructor
        ExpeditionTimer(string timerName);

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
};