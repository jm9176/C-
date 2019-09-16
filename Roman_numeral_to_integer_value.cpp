#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    
    unordered_map<char, int> u_map;
    string inp_str = "IV";
    int length_str = inp_str.length();
    int i = 0;                                  // loop iteration
    int str_value = 0;
    
    u_map['I'] = 1;
    u_map['V'] = 5;
    u_map['X'] = 10;
    u_map['L'] = 50;
    u_map['C'] = 100;
    
    while(i < length_str){
        if(u_map[inp_str[i+1]] > u_map[inp_str[i]]){
            
            str_value += (u_map[inp_str[i+1]] - u_map[inp_str[i]]);
            i += 1;
            
            } else {
            str_value += u_map[inp_str[i]];    
            }
            
        i += 1;
        }
    
    cout<<str_value<<endl;
    
    return 0;
    }
