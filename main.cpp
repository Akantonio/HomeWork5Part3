#include <iostream>
#include "StopWatch.h"
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    return (fib(n-1)+fib(n-2));
}

void fib_loop(int n){
    int temp;
    int first=0;
    int second=1;
    std::cout<<first<<" ";
    for(int i=0;i<n;i++){
        temp= first+second;
        first=second;
        second=temp;
        std::cout<<first<<" ";
    }
}

int ack(int m,int n){
    if(m==0){
        return n+1;
    }else if(m>0&&n==0){
        return ack(m-1,1);
    }else if(m>0&& n>0){
        return ack(m-1,ack(m,n-1));
    }
}

void timingAckerman(int m, int n,StopWatch & time){
    std::cout<<"The values before it crashes m: "<<m<<" The n: "<< n << std::endl;
    time.start();
    std::cout << ack(m, n) << std::endl;
    time.stop();
    time.readTime(1);
}
int main() {
    int n =0;
    std::cout << "Recursion" << std::endl;
    while (n < 10) {
        std::cout << fib(n) << " ";
        n++;
    }
    std::cout << "\n";
    std::cout << "Fib_loop" << std::endl;
    fib_loop(9);
    std::cout << "\n";

    std::cout << "Ackerman's function with integers" << std::endl;
    //Crashes when the number is higher than 2^32
    //  which is the highest amount that an Integer can store.
    //Crashes at ack(4,n>0)
    //Crashes at ack(3,n>12)
    //Crashes at ack(2,n>21666)
    StopWatch time;
    timingAckerman(4,0,time);
    timingAckerman(3,12,time);
    timingAckerman(2,21666,time);
    return 0;
}
