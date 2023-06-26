#include<bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define vll vector<ll>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long int ll;
typedef long double lld;

using namespace std;

template <typename T>
vector<T> slicing(vector<T> const& v,
                  int X, int Y)
{
 
    auto first = v.begin() + X;
    auto last = v.begin() + Y + 1;
 
    vector<T> vector(first, last);
 
    return vector;
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    ll n;
    cin>>n;
    ll dp[n+1];
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=0;
    }
    for(int i=1;i<=n;i++){
        if(i<=6){
            int j=i-1;
            while(j>=0){
                dp[i]+=dp[j];
                j--;
            }
        }
        else{
            dp[i]=(dp[i-1]%MOD+dp[i-2]%MOD+dp[i-3]%MOD+dp[i-4]%MOD+dp[i-5]%MOD+dp[i-6]%MOD)%MOD;
        }
    }
    cout<<dp[n]%MOD<<endl;
    return 0;
}