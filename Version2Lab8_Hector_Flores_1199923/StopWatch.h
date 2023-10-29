#pragma once
#include <chrono>

 class StopWatch
{
private:
    std::chrono::steady_clock::time_point start_time;
    std::chrono::steady_clock::time_point end_time;

public:
    void start();

    void stop();

    double elapsed_time();
    

};

