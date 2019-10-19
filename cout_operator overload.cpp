#include<bits/stdc++.h>
using namespace std;

class Box{
    private:
        long l, b, h;
    public:
        Box(){
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int temp_l, int temp_b, int temp_h){
            l = temp_l;
            b= temp_b;
            h = temp_h;
        }
        Box(Box &temp_Box){
            l = temp_Box.l;
            b = temp_Box.b;
            h = temp_Box.h;
        }
        friend bool operator < (Box& Box1, Box& Box2){
            if (Box1.l<Box2.l){
                return true;
            } else if(Box1.b < Box2.b && Box1.l == Box2.l){
                return true;
            } else if(Box1.h<Box2.h && Box1.b == Box2.b && Box1.l == Box2.l){
                return true;
            }
            return false;
        }
        friend ostream& operator << (ostream &out, Box &temp_Box){
            out<<temp_Box.l<<" "<<temp_Box.b<<" "<<temp_Box.h;
            return out;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        }


};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
