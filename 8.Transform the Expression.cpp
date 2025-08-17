#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
//no need of any order priority
int main(){
      int t;cin>>t;
      while(t--){
        string s;cin>>s;
        stack<int>st;
        for(char ch:s){
                if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){st.push(ch);}
                else if(ch==')'){
                        while(true){
                                char c=st.top();
                                st.pop();
                                if(c=='('){break;}
                                else{cout<<c;}
                        }
                }
                else{cout<<ch;}
       }
       cout<<endl;
     }           
} 
