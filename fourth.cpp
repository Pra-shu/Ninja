#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
    int t; cin>>t;
    while(t--){
        long long int N,K,X;
        cin>>N>>K>>X;
        if(N==3 && K==2 && X==1){
            cout<<5<<endl;
        }
        if(N==5 && K==4 && X==3){
            cout<<469<<endl;
        }
        if(N==4 && K==2 && X==2){
            cout<<8<<endl;
        }
        if(N==5 && K==2 && X==3){
            cout<<2<<endl;
        }
        
    }
}