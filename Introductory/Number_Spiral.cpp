#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;
void solve(){
ll x,y;
cin>>x>>y;
if(x>=y){
    if(x%2){
        cout<<(x-1)*(x-1)+y<<endl;
    }
    else{
        cout<<x*x-y+1<<endl;
    }
} 
else{
    if(y%2){
        cout<<y*y-x+1<<endl;
    }
    else{
        cout<<(y-1)*(y-1)+x<<endl;
    }
}
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

ll T;
cin>>T;
while(T--){
solve();
}
    
    return 0;
}