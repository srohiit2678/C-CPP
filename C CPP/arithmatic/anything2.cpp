// error handling in file I/O

// >eof() true > file reached
//         false > not

// >fail()  true > unrecoverable error
//        false > recoverable error


// >good() true > error in file I/O opration
//        false > no further opration



// >bad() true > unrecoverable error
//        false > recoverable error


int main(){
    char a[100];
    ofstream of;
    
}
#include<iostream>
using namespace std;
#include<fstream>
int main(){
    fstream r;
    r.open("demo.txt");
    while(!r.fail()){
        cout<<r.tellg();
        r.seekg(5,ios::beg);
        cout<<r.tellg()<<endl;
        char ch;
        while(!r.eof()){
            ch = r.get();
            cout<<ch;
        }
    }
    if(r.eof()){
        cout<<"end of file is reached";

    }
    else if(r.bad()){
        cout<<"fatal error";

    }
    else{
        r.clear();
    }
    r.close();
    return 0;
}
