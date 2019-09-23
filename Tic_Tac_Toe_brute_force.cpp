#include<iostream>
using namespace std;

#define rows 3
#define cols 3

void print_grid(char temp_arr[][cols]){
    for(int i=0; i<rows; i++){
        cout<<temp_arr[i][0]<<"|"<<temp_arr[i][1]<<"|"<<temp_arr[i][2]<<endl;
        cout<<"______"<<endl;
        }
    }

char find_winner(char temp_arr[][cols]){
    
    for(int i=0; i<rows; i++){
        if(temp_arr[i][0] == temp_arr[i][1] && 
            temp_arr[i][1] == temp_arr[i][2]){
                return temp_arr[i][0];
                }
        }
    
    for(int i=0; i<cols; i++){
        if(temp_arr[0][i] == temp_arr[1][i] && 
            temp_arr[1][i] == temp_arr[2][i]){
                return temp_arr[0][i];
                }
        }
    
    if(temp_arr[0][0] == temp_arr[1][1] && 
        temp_arr[1][1] == temp_arr[2][2]){
            return temp_arr[1][1];
        }
    
    if(temp_arr[0][2] == temp_arr[1][1] && 
        temp_arr[1][1] == temp_arr[2][0]){
            return temp_arr[1][1];
        }
    
    return 'N';
    }

int main(){
    
    char arr[rows][cols] = {{'x','o','x'},
                            {'x','o','o'},
                            {'x','N','N'}};

    char winner = find_winner(arr);

    if(winner != 'N'){
        cout<<"Winner is: "<<winner<<endl;
        } else{
        cout<<"winner not found"<<endl;
            }

    return 0;
    }
