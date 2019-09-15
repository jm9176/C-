#include<iostream>
#include<map>
using namespace std;

long int fibo_series(int n, map<int, long int> &fibo){
    if(n<=2){
        return 1;
        } 
        
    cout<<fibo[n-1]<<", "<<fibo[n-2]<<endl;
    
    if(!fibo[n-2]){
        fibo[n-2] = fibo_series(n-2, fibo);
        } 
        
    if(!fibo[n-1]){
        fibo[n-1] = fibo_series(n-1, fibo);
        }     
    
    fibo[n] = fibo[n-1] + fibo[n-2];
   
    return fibo[n];
    
    }

int main(){
    
    int num = 50;
    map<int, long int> fibo;
    fibo[1] = 1;
    fibo[2] = 1;
    
    cout<<fibo_series(num, fibo)<<endl;
    
    return 0;
    }
