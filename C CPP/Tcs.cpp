#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,n,cb=0;
    cin >>b>>n;
    vector<int> t;
    vector<int> cs = {b};
    for(int i=0;i<n;i++){
        string place;
        cin >> place;
        if(place =="read"){
            cout<< cs[cb]<<endl;
        }
        else if(place == "credit" || place == "debit"){
            int x;
            cin >>x;
            if(place == "credit") cs[cb]+=x;
            else cs[cb]-=x;
            t.push_back(place == "credit"?x:-x);
        }
        else if(place == "abort"){
            int x;
            cin >>x;
            cb = x-1;
            cs.resize(cb+1);
        }
        else if(place == "commit"){
            cs.push_back(cs[cb]);
            cb++;
        }
    }
    return 0;
}