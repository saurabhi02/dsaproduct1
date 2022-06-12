#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int contain4(int n)
{
   vector<int> dp;

    dp.push_back(1);
    dp.push_back(2);
    for(int i=2;i<n;i++)
    {
        dp.push_back(dp[i-1]+dp[i-2]);
    }
    return dp[n-1];
}
int main()
{
    int n;
    cin>>n;
    int ans=contain4(n);
    cout<<ans;
    return 0;
}