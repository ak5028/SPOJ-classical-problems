#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int main(){
      int t;cin>>t;
      while(t--){
        string a,b;cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int c=stoi(a)+stoi(b);
        string c1=to_string(c);
        int n=c1.size(),x=0;
        for(int i=n-1;i>=0;i--){
                if(c1[i]=='0' && x==0){continue;}
                else{x=1;cout<<c1[i];}    
        }
        cout<<endl;
     }           
} 
