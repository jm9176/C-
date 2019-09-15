#include<iostream>
using namespace std;

class num_sum{
    private:
        int value;
    
    public:
        void setValue(int x){
            value = x;
            }
        void getValue(){
            cout<<value<<endl;
            }
        
        num_sum sum(num_sum x){
            num_sum temp;
            temp.value = value + x.value;
            return temp;
            
            }
        
    };

int main(){
    
    num_sum num1, num2, num3;
    num1.setValue(2);
    num2.setValue(3);
    
    num1.getValue();
    num2.getValue();
    
    num3 = num1.sum(num2);
    num3.getValue();
    
    return 0;
    }
