#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
vector<int>v(101);
void solve(){
        for(int i=1;i<=100;i++){
                v[i]=v[i-1]+i*i;
        }
}
 
int main(){
      solve();
      while(true){
        int a;cin>>a;
        if(a==0){break;}
        cout<<v[a]<<endl;
      }
}  
