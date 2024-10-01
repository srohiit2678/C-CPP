#include<iostream>
using namespace std;
int main(){
	int *p;
	int a[5]={1,2,3,4,5};
	p=a;
	cout<<p<<endl;
	cout<<*p<<endl;
	p=a+1;
	cout<<p<<endl;
	cout<<*p<<endl;
p=new int[5];
// for(int i:a){
// 	cout<<i<<endl;
// }
return 0;
}