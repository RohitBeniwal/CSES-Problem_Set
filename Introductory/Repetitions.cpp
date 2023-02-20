#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    string s;
    cin>>s;
    ll ans=1;
    ll cnt=0;
    rep(i,0,s.length()-1){
        if(s[i+1]==s[i]){
            cnt++;
        }
        else{
            cnt=0;
        }
        ans=max(ans,cnt+1);
    }
    cout<<ans<<endl;
    return 0;
}