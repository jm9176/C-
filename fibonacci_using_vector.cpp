#include<iostream>
#include<vector>
using namespace std;

void fibo_series(int fibo_num){
    vector<int> vec_series;
    vec_series.push_back(1);
    vec_series.push_back(1);
    
    int curr_sum = 0;
    
    for (int i=2; i<fibo_num; i++){
        curr_sum = vec_series.at(i-2) + vec_series.at(i-1);
        vec_series.push_back(curr_sum);
        }
    
    vector<int>::iterator ptr;
    ptr = vec_series.begin();
    
    while(ptr!=vec_series.end()){
        cout<<*ptr<<endl;
        ptr++;
        }
    
    }

int main(){
    
    int series_num = 7;
    fibo_series(series_num);
    
    return 0;
    }
