#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      int t;cin>>t;
      while(t--){
        int m,n;cin>>m>>n;
        for(int i=m;i<=n;i++){
                if(i==1){continue;}
                bool f=true;
                for(int j=2;j*j<=i;j++){
                        if(i%j==0){f=false;break;}
                }
                if(f){cout<<i<<endl;}
        }
        cout<<endl;
      }
} 
