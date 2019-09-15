#include<iostream>
using namespace std;

void sort_arr(char arr[], int size){
    int ind_low = 0;
    int ind_mid = 0;
    int ind_high = size - 1;
    
    while(ind_mid <= ind_high){
        
        if(arr[ind_mid] == 'R'){
            
            swap(arr[ind_low], arr[ind_mid]);
            ind_low++;
            ind_mid++;
            
            } else if (arr[ind_mid] == 'G') {
            
            ind_mid++;
            
                } else {
                    
            swap(arr[ind_mid], arr[ind_high]);
            ind_high--;
                }
        }
    }

int main(){
    
    char inp_arr[] = {'G', 'B', 'R', 'R','B', 'R', 'G'};
    int size = sizeof(inp_arr)/sizeof(inp_arr[0]);
    
    sort_arr(inp_arr, size);
    
    for(int i=0; i<size; i++){
        cout<<inp_arr[i]<<endl;
        }
    
    return 0;
    }
