#include <iostream>
#include <chrono>

int main() {
    auto startTime = std::chrono::steady_clock::now();
    auto currentTime = std::chrono::steady_clock::now();
    auto elapsedtime = currentTime - startTime;

    auto targetTime = 5.0;
    

    return 0;
}