#include "timer.hpp"

#include <chrono>

void Timer::start()
{
    startTime_ = std::chrono::system_clock::now();
}

void Timer::stop()
{
    endTime_ = std::chrono::system_clock::now();
}

int Timer::elapsed() const
{
    long long elapsedTime = std::chrono::duration_cast<std::chrono::seconds>(endTime_ -  startTime_).count();
    return static_cast<int>(elapsedTime);
}
