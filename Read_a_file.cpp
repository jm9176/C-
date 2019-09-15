#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream file("MathWorks.txt", ios::in);

    if(!file){
        cout<<"ERROR: Read file"<<endl;
        return 1;
    }

    string line;

    while(!file.eof()){
        getline(file, line);
        cout<<line<<endl;
    }

    file.close();
    return 0;
}
