#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<long long> fib(int n)
{
     vector<long long> dp;
        dp.push_back(1);
        dp.push_back(1);
        for(int i=2;i<n;i++)
        {
            dp.push_back(dp[i-1]+dp[i-2]);
        }
        return dp;
}
int main()
{
    int n;
    cin>>n;
    vector<long long > ans=fib(n);
    for(auto i: ans)
    cout<<i<<" ";
    return 0;
}