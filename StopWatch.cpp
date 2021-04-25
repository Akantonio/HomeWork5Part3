//
// Created by Adrian Antonio on 1/29/2021.
//

#include "StopWatch.h"


StopWatch::StopWatch():_initialTime() {
    std::cout<<"Program ";
    start();
}

void StopWatch::start() {
    _initialTime= std::chrono::system_clock::now();
    std::cout<< "Time starts " << std::endl;
}

void StopWatch::stop() {
    _endTime = std::chrono::system_clock::now();
}

void StopWatch::readTime(int type) {
    double duration;
    auto diff = _endTime-_initialTime;
    if(type==0) {
        duration = std::chrono::duration<double>(diff).count();
        std::cout << "Time ends @ " << duration << " seconds." << std::endl;
        _storedTime=duration;
    }else if(type==1) {
        duration = std::chrono::duration<double, std::milli>(diff).count();
        std::cout << "Time ends @ " << duration << " milliseconds." << std::endl;
        _storedTime=duration;
    }else {
        std::cout<< "Error in Inputted type." <<std::endl;
    }
}

double StopWatch::getReadTime() {
    return _storedTime;
}
