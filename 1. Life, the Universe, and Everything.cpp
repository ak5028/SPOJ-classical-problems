#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      vector<int>v;
      while(true){
        int n;cin>>n;
        if(n==42){break;}
        v.push_back(n);
      }
      for(auto val:v){
        cout<<val<<endl;
      }
} 
