#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string inp_str = "Hello";
    int length = inp_str.length();
    char inp_char[length];
    
    for(int i=0; i<length; i++){
        inp_char[i] = inp_str[i];
        }
        
    for(int i=0; i<length; i++){
        cout<<inp_char[i]<<endl;
        }
    
    return 0;
    }
