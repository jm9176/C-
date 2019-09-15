/*
Creating a private constructor
*/

#include<iostream>
#include<string.h>
using namespace std;

class demo{
    private:
        char admin[20];
        char admin_pass[10];
        
        static int counter;
    
        demo(){
            strcpy(admin, "Admin");
            strcpy(admin_pass, "Password");
            }
            
    public:
        void show_value(){
            cout<<admin<<", "<<admin_pass<<endl;
            }
        static demo* create_obj(){
            demo *ptr;
            
            if(counter == 0){
                ptr = new demo;
                counter++;
                return ptr;
                }
            else {
                ptr = NULL;
                return ptr;
                }
            }
    };
    
int demo::counter = 0;
    
int main(){
    
    demo *ptr, *ptr2;
    ptr = demo::create_obj();
    ptr2 = demo::create_obj();
    
    ptr -> show_value();
    if (ptr2 != NULL){
        ptr2 -> show_value();
    } else {
        cout<<"ptr2 is NULL"<<endl;
        }
    
    return 0;
    }
