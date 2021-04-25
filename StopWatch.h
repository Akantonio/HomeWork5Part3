//
// Created by Adrian Antonio on 1/29/2021.
//

#ifndef HOMEWORK1_STOPWATCH_H
#define HOMEWORK1_STOPWATCH_H

#include <iostream>
#include <chrono>
#include <ctime>


class StopWatch {
public:
    StopWatch();
    void start();
    void stop();
    void readTime(int type);
    double getReadTime();
private:
    std::chrono::time_point<std::chrono::system_clock> _initialTime;
    std::chrono::time_point<std::chrono::system_clock> _endTime;
    double _storedTime=0;
};


#endif //HOMEWORK1_STOPWATCH_H