#include<iostream.h>
 using namespace std;
class A
{
    //multilavel inheritance
    protected:
    int a,b;
    public:
        void set()
        {
            cout<<"Enter the value of a or b";
            cin>>a>>b;
        }
};
class B: public A
{
    protected:
    int c;
    public:
    void add()
    {
        c=a+b;
    }
};
class C: public B
{
    public:
    void show()
    {
        cout<<"value of c="<<c;
    }
};
int main()
{
    C ob;
    ob.set();
    ob.add();
    ob.show();
    return 0;
}
