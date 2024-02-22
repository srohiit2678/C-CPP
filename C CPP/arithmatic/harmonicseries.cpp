#include<iostream>
using namespace std;
int main(){
float a=1;
float b=0;
int n,plus=0;
cout<<"enter the n'th term of series"<<endl;
cin>>n;
for (int i = 0; i <= n; i++)
{
    cout<<a<<"/"<<b+plus<<" + ";
    plus++;
}
cout<<".......";
return 0;
} 