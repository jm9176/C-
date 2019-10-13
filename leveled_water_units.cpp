#include<iostream>
#include<cstring>
using namespace std;

// function to print the values inside the array
void print_arr(int temp_arr[], int temp_size){
    
    for(int i=0; i<temp_size; i++){
        cout<<temp_arr[i]<<endl;
        }
    
    }

// function to find the rquired units of water to level the index values
int level_water(int temp_arr[], int temp_size){
    
    // array to store the max current level going from left to right
    // and right _arr to store max current level going from right to left
    int left_arr[temp_size];
    int right_arr[temp_size];
    
    int left_max = 0;
    int right_max = 0;
    
    int req_units = 0;
    
    // setting all the index values of left and right array to 0
    memset(left_arr, 0, temp_size);
    memset(right_arr, 0, temp_size);
    
    // iterative loop to find the values to be stored in left and right array
    for (int i=0; i<temp_size; i++){
        
        left_max = max(left_max, temp_arr[i]);
        right_max = max(right_max, temp_arr[temp_size-i-1]);
        
        left_arr[i] = left_max;
        right_arr[temp_size-i-1] = right_max;
    }
    
    cout<<"Left array is: "<<endl;
    print_arr(left_arr, temp_size);
    
    cout<<"Right array is: "<<endl;
    print_arr(right_arr, temp_size);
    
    // calculate the required additional units which can be stored as per the given input
    for(int i=0; i<temp_size; i++){
        req_units += (min(left_arr[i], right_arr[i]) - temp_arr[i]);
        }
    
    return req_units;
}

int main(){
    
    int inp_arr[] = {1,2,1,1,1,2,1};
    int arr_size = sizeof(inp_arr)/sizeof(inp_arr[0]); 
    
    cout<<"Required units of water: "<<level_water(inp_arr, arr_size)<<endl;;
    
    return 0;
    
    }
