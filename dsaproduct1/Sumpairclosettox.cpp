#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> Closest(vector<int> a,int val1 )
{
    vector<int> ans1;
    int n=a.size();
    int i=0;
    int j=n-1;
    int ans=0,sum=0,a1=0,a2=0,diff=0,diff1=0;
    while(i<j)
    {
        sum=a[i]+a[j];
        if(sum<val1)
        {
            diff=abs(val1-sum);
            diff1=abs(val1-ans);
           // cout<<diff1<<" difference "<<diff<<endl;
            if(diff1>diff)
            {
                ans=sum;
              //  cout<<"sum 1 "<<ans<<endl;
                a1=a[i];
                a2=a[j];

            }
            i++;
        }
       else if(sum>val1)
        {
            diff=abs(val1-sum);
            diff1=abs(val1-ans);
           //  cout<<diff1<<" difference 2 "<<diff<<endl;
            if(diff1>diff)
            {
                ans=sum;
                
               // cout<<"sum 2 "<<ans<<endl;
                a1=a[i];
                a2=a[j];

            }
            j--;
        }
       else 
       {
           ans1.push_back(a[i]);
           ans1.push_back(a[j]);
           return ans1;
       }
           
    }
    //cout<<a1<<" ans e "<<a2<<endl;
            ans1.push_back(a1);
            ans1.push_back(a2);
    return ans1;
}
int main()
{
    int n,val;
    cin>>n>>val;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int u;
        cin>>u;
        a.push_back(u);
    }
    vector<int> ans=Closest(a,val);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}