#include "src/timer.hpp"

#include <iostream>
#include <thread>

using namespace std::chrono_literals;

int main()
{
    Timer timer;

    timer.start();

    std::this_thread::sleep_for(10s);

    timer.stop();

    std::cout << "Time: " << timer.elapsed() << std::endl;

    return 0;
}
