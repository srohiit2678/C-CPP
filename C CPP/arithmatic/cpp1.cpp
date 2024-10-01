#include<iostream>
using namespace std;
class demo{
    public :
    int x,y;
    void get(int x,int y)
    {
       this-> x=x;
        this-> y=y;
    }
    void show(){
    cout<<x<<endl;
    cout<<y<<endl;
    } 
};

int main(){
 demo d;
   d.show();
   d.get(10,20);
    d.show();
return 0;
}