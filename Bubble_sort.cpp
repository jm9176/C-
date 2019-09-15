#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                }
            }
        }
    }   

int main(){
    
    int arr[] = {11,2,6,3,1};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr, size_arr);
    
    for (int i=0; i<size_arr; i++){
        cout<<arr[i]<<endl;
        }
    
    return 0; 
    }
