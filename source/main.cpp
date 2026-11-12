#include <iostream>
#include <chrono>
#include "classExpeditionTimer.h"
using namespace std;

int main() {
    
    ExpeditionTimer timer("Test Timer");
    std::cout << "Starting timer..." << std::endl;
    timer.setStartTime();
    auto target = chrono::seconds(6);
    


    return 0;
}