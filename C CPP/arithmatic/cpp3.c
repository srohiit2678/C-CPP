#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class user
{
    protected:
    char uname[20];
    char pass[20];
    public:
    user()
    {
        strcpy(uname,"admin");
        strcpy(pass,"admin123");
    }
};
class Login:public user
{
protected:
    int flag;
    char username[20]
    char password[20];
public:
    Login()
    {
        flag=0;
    }
    void set()
    {
        cout<<"Enter the user name";
        cin>>username;
        cout<<"enter the password;
    }
    int userligin()
    {
        if((!strcmp(username,uname)) &&(!strcmp(password,pass)))
        {
            flag=1;
        }
        else
            {
                cout<<"login fail"<<endl;
               flag=0;

            }
            return flag;
    }
};
class bank:public Login
{
protected:
    int bal,amt;
public:
    bank()
    {
        bal=5000;
    }
    void deposit()
    {
        cout<<"Enter the amount to be depoisted"<<endl;
        cin>>amt;
        if(amt>0)
        {
            cout<<"amposited="<<amt<<endl;
             bal= bal+amt;
           cout<<"total bal="<<bal<<endl;
        }
        else
            {
                cout<<"invalid amount";
            }
        void withdeawal()
        {
            cout<<"Enter the amount to be deposted"<<endl;
            cin>>amt;
            if (amt>0 && amt<=bal)
            {
            cout<<"total bal="<<bal<<endl;
            bal=bal-amt;
            cout<<"total bal="<<bal<<endl;
           }
        }
        else
        {
            cout<<"invalid amount";
        }
        void show()
        {
            cout<<"total bAl="<<bal<<endl;

        }
        void check()
        {
            int f;
            int ch;
            set();
            f=userlogin();
            if(f==1)
            {
                cout<<"press 1 for deposit"<<endl;
                cout<<"press 2 for withdrawal"<<endl;
                cout<<"press 3 for show balance"<<endl;
                cout<<"press 4 for exit"<<endl;
                cin>>ch;
                switch(ch)
                {
                case 1:
                    deposit();
                    break;
                case 2:
                    withdrawal();
                    break;
                case 3:
                    show();
                    break;
                default:
                    exit(0);
                }
            }
        }
};
int main()
{
    bank ob;
    ob.check();
    return 0;
}
