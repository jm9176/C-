#include<iostream>
using namespace std;

void tower(int num, char start, char aux, char end){
    
    if(num>=1){
        tower(num-1, start, end, aux);
        cout<<start<<"-->"<<end<<endl;
        tower(num-1, aux, start, end);
        }
    }

int main(){
    
    int num_discs = 3;
    char start, aux, end;
    start = 'A';
    aux = 'B';
    end = 'C';
    
    // Tower of hanoi
    tower(num_discs, start, aux, end);
    
    return 0;
    }
