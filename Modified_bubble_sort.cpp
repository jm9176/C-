#include<iostream>
using namespace std;

void bubble_sort(int temp[], int size){
    
    int flag = 0;
    
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(temp[j]>temp[j+1]){
                flag = 1;
                swap(temp[j], temp[j+1]);
                }
            }
        if (flag == 0){
            cout<<"flag: "<<flag<<endl;
            return;
            }
        }
    }

int main(){
    
    int arr[]={1,2,3,4,5};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr,arr_size);
    
    for (int i=0; i<arr_size; i++){
        cout<<arr[i]<<endl;
        }
    
    return 0;
    }
