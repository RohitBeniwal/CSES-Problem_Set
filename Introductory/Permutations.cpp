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
    ll n;
    cin>>n;
    if(n>3 || n==1){
    ll a=n;
    ll b=n-n/2;
    rep(i,0,n){
        if(i%2){
            cout<<a<<" ";
            a--;
        }
        else{
            cout<<b<<" ";
            b--;
        }
    }
    cout<<endl;
    }
    else{
        cout<<"NO SOLUTION"<<endl;
    }
    
    return 0;
}