#include<iostream>
#include<string>
using namespace std;

int main(){
    
    char inp_arr[] = {'H','e','l','l','o'};
    int size = sizeof(inp_arr)/sizeof(inp_arr[0]);
    string inp_str = "";
    
    for(int i=0; i<size; i++){
        inp_str += inp_arr[i];
        }
        
    cout<<inp_str<<endl;
    
    return 0;
    }
