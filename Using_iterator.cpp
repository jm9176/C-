#include<iostream>
#include<list>
using namespace std;

int main(){
    
    list<int>l1{1,2,3,4,5,6};
    list<int>::iterator p1 = l1.end();
        
    while (p1 != l1.begin()){
        p1--;
        cout<<*p1<<" "<<endl;
        }

    return 0;
    }
