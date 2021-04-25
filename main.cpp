#include <iostream>

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

int main() {
    int n=9;
    std::cout << "Recursion" << std::endl;
    while(n!=0) {
        std::cout << fib(n)<<" ";
        n--;
    }
    std::cout<<"\n";
    std::cout << "Fib_loop" << std::endl;
    fib_loop(9);

    std::cout<<"Ackerman's"<<std::endl;
    std::cout<< ack(,0);
    return 0;
}
