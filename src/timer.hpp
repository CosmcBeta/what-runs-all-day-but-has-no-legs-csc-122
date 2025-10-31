#pragma once

#include <chrono>

class Timer
{
public:
    Timer() = default;

    void start();
    void stop();
    int elapsed() const;

private:
    std::chrono::time_point<std::chrono::system_clock> startTime_, endTime_;
};
