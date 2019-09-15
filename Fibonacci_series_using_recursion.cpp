#include<iostream>
using namespace std;

int fib(int num){
    
    int temp;
    
    if(num<=2){
        return 1;
        }
    else{
        temp = fib(num-1) + fib(num-2);
        }
    
    return temp;
    }

int main(){
    
    int series_num = 7;
    cout<<"Fibo num at "<<series_num<<" is: "<<fib(series_num);
    
    return 0;
    }
