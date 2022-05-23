#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> Twopointer(vector<int> a, int target)
{
    vector<int> ans;
    int start=0,end=a.size()-1;
    while(start<end)
    {
        if(a[start]+a[end]==target)
        {
            ans.push_back(start+1);
            ans.push_back(end+1);
            return ans;
        }
        if(a[start]+a[end]> target)
        end--;
        else if(a[start]+a[end]<target)
        start++;
       

    }
return ans;

}
int main()
{
   int  n;
    cin>>n;
    vector<int> a;
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        int u;
        cin>>u;
        a.push_back(u);
    }
    vector<int > ans=Twopointer(a,target);
    for(auto i:ans)
    cout<<i<<" ";
   

    return 0;
}