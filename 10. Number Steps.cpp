#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      int n;cin>>n;
      while(n--){
        int x,y;cin>>x>>y;
        int ans;
        if(x-y==0){
                if(x%2==0){ans=x*2;}
                else{ans=x*2-1;}
        }
        else if(x-y==2){
                if(x%2==0){ans=x+y;}
                else{ans=x+y-1;}
        }
        else{ans=-1;}
 
        if(ans==-1){cout<<"No Number"<<endl;}
        else{cout<<ans<<endl;}
      }
} 
