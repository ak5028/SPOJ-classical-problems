#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      vector<string>st;vector<int>val;
      while(true){
        int a,b,c;cin>>a>>b>>c;
        if(a==b && b==c && c==0){break;}
        if(b-a == c-b){st.push_back("AP"); val.push_back(c+(b-a));}
        else{st.push_back("GP"); val.push_back(c*(b/a));}
      }
      for(int i=0;i<st.size();i++){
        cout<<st[i]<<" "<<val[i]<<endl;
      }
} 
