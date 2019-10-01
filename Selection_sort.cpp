// Selection sort
#include <iostream>
#include <string>

using namespace std;

// Function to sort the array
void selection_sort(int arr[], int size){
    
    // variable storing the index of the 
    // minimum value in the array
    int min_index;
    
    for(int i=0; i<size-1; i++){
        min_index = i;
        
        for(int j=i+1; j<size; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
                }
            }
        
        swap(arr[min_index], arr[i]);
        
        }
    }

// Function to print the array
void print_arr(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
        }
    }

// main function
int main()
{
    int arr[]= {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    selection_sort(arr, size);
    print_arr(arr,size);
    
    return 0;
}
