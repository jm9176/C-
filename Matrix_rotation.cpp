#include<iostream>
using namespace std;

void print_arr(int temp_arr[][3], int temp_row, int temp_col){
    
    for(int i=0; i<temp_row; i++){
        for(int j=0; j<temp_col; j++){
            cout<<temp_arr[i][j]<<",";        
        }
        cout<<endl;
    }
}

void rot_mat(int temp_arr[][3], int temp_row, int temp_col, int rot_dir){
    
    int iter_row, iter_col;
    
    if(rot_dir>0){
        iter_col = temp_col/2;
        iter_row = temp_row;
        } else {
        iter_row = temp_row/2; 
        iter_col = temp_col;
    }

    for(int i=0; i<iter_row; i++){
        for(int j=0; j<iter_col; j++){
            if(rot_dir>0){
                swap(temp_arr[i][j], temp_arr[i][temp_col-1-j]);                    
            }else {
                swap(temp_arr[i][j], temp_arr[temp_row-1-i][j]);
                }
            }    
        }

    }


int main(){
    
    int arr[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    
    int size_row = sizeof(arr)/sizeof(arr[0]);
    int size_col = sizeof(arr[0])/sizeof(arr[0][0]);
    int rot_dir = -1;
    
    // rotate matrix by CW 90 degree
    for(int i=0; i<size_row-1; i++){
        for(int j=0; j<size_col; j++){
            if(j>i){
                swap(arr[i][j], arr[j][i]);        
            }
        }
    }


    print_arr(arr, size_row, size_col);
    
    cout<<"rotated matrix is: "<<endl;
    
    rot_mat(arr, size_row, size_col, rot_dir);
    print_arr(arr, size_row, size_col);

    return 0;
    }
