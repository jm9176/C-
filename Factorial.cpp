#include<iostream>
using namespace std;

// calculate the factorial
int calc_fact(int temp_num){
    if(temp_num<=1){
        return 1;
    } else {
        return (temp_num*calc_fact(temp_num-1));
    }
}

// Main function
int main(){
    
    int num;
    
    cout<<"Enter the value of the num: ";
    cin>>num;
    
    cout<<"Factorial of "<<num<<" is: "<<calc_fact(num);
    
    return 0;
}
