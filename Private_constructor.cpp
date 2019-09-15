#include<iostream>
using namespace std;

class demo{
    private:
        int x, y;
        
        demo(){
            x = 0;
            y = 0;
            }
    public:
        void show_value(){
            cout<<x<<", "<<y<<endl;
            }
        
        static demo* getInstance(){
            demo* ptr = new demo;
            return ptr;
            }
    
    };
    

int main(){
    
    demo *d1;
    d1 = demo::getInstance();
    d1 -> show_value();
    
    return 0;
    }
