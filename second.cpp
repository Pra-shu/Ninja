#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
 long long int power(long long int N,long long int pow,long long int mod){


      if(N==0 || N==1) return N%mod;

      if(pow==0) return 1;

       if(mod==1) return 0;

      long long int ans=1;

        while(pow){

            if(pow%2){

               ans=(ans*N)%mod;
            }

            N=(N*N)%mod;
            pow/=2;
        }
    return ans;
  }
int main(){
    int t; cin>>t;
    while(t--){
        long long int a,b,n;
        cin>>a>>b>>n;
        long long int ans,x,y,z;
        if(n%2){
           n=n/2;
           z=power(2,n,MOD);
           x=((z%MOD)*((a)%MOD))%MOD;
           y=(((z)%MOD)*((b)%MOD))%MOD;
           cout<<x<<" "<<y<<endl;
        }
        else{
           z=power(2,(n-1)/2,MOD);
           x=(((z)%MOD)*((b-a)%MOD))%MOD;
           y=(((z)%MOD)*((b+a)%MOD))%MOD;
           cout<<x<<" "<<y<<endl;
        }
    }
}