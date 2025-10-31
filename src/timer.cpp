#include "timer.hpp"

#include <chrono>

void Timer::start()
{
    // auto now = std::chrono::system_clock::now();
    // auto nowSeconds = std::chrono::time_point_cast<std::chrono::seconds>(now);
    // auto epoch = nowSeconds.time_since_epoch();
    // auto value = std::chrono::duration_cast<std::chrono::seconds>(epoch);
    // long duration = value.count();
    startTime_ = std::chrono::system_clock::now();
}

void Timer::stop()
{
    endTime_ = std::chrono::system_clock::now();
}

int Timer::elapsed()
{
    // auto timeElapsed {endTime_ - startTime_};

    long long elapsedTime = std::chrono::duration_cast<std::chrono::seconds>(endTime_ -  startTime_).count();



    // long long seconds_since_epoch = std::chrono::duration_cast<std::chrono::seconds>(timeElapsed.time_since_epoch()).count();




    // If you are certain the value fits within an int:
    // int int_seconds_since_epoch = static_cast<int>(seconds_since_epoch);


    return static_cast<int>(elapsedTime);
}
