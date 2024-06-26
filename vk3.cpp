#include<bits/stdc++.h>
#include <cmath>
#define ll long long
#define pb push_back
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define c2 cout<<"-1\n"
#define all(x) x.begin(),x.end()
#define re(x) x.rbegin(),x.rend()
#define F first
#define S second
#define ii pair<ll,ll>
using namespace std;

const int size=3e5+5;


signed main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long n;
    cin>> n;

    vector<ll> a,b;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
    }
   
    vector<pair<ll,ll>> rocks;
    for(int i=0;i<n;i++){
        
        rocks.push_back({a[i]*b[i],i});
    }

    vector<ll> ans;
        stack<pair<ll,ll>> st;
        
        for(auto ast : rocks)
        {
            if(ast.first>0) st.push({ast.first,ast.second});
                     
            else {                 
                
                    while(!st.empty() && st.top().first>0 && st.top().first<abs(ast.first)) st.pop();
                
                    if(st.empty() or st.top().first<0) st.push({ast.first,ast.second});  
                    else if(st.top().first + ast.first==0) st.pop();   
                }
            }       
        
        while(!st.empty())
        {
            ans.push_back(st.top().second);
            st.pop();
        }
        reverse(ans.begin(),ans.end());

      for(auto ele:ans)
      cout<<ele<<" ";
        cout<<endl;
 
}