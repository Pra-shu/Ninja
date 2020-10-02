#include<bits/stdc++.h>
using namespace std;
int repeated_digit(int n) 
{ 
    unordered_set<int> s; 
    while(n != 0) 
    { 
        int d = n % 10;
        if(s.find(d) != s.end()) 
        { 
            return 0; 
        } 
        s.insert(d); 
        n = n / 10; 
    } 
    return 1; 
} 
int calculate(int L,int R) 
{ 
    int answer = 0; 
    for(int i = L; i < R + 1; ++i) 
    { 
        answer = answer + repeated_digit(i); 
    } 
    return answer ; 
} 
void countnumbers(vector<vector<int>>v){
    int s=v.size();
     for(int i=0;i<s;i++){
         cout<<calculate(v[i][0],v[i][1])<<endl;
     }
}
int main(){
    int q,x,y;
    cin>>q;
    int size;
    cin>>size;
    vector<vector<int>>v(size);
    for(int i=0;i<q;i++){
        cin>>x>>y;
        v[i].push_back(x);
        v[i].push_back(y);
    }
     countnumbers(v);
}