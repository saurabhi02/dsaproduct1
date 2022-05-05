// to compute algorith to find element that appears more then n/2 times 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int MaxFrequency1(vector<int> a)
{
    int n=a.size();
    sort(a.begin(),a.end());
   
    
    int maxn=n/2;
  
    int ans=0;
    int cnt=0;
    int ans1=-1;
    for(int i=0;i<n;i++)
    {
        cnt++;
        if(a[i]!=a[i+1])
        {
        
            // cout<<a[i]<<" "<<cnt<<endl;
            if(ans<cnt )
            {
                ans=cnt ;
                if(cnt>maxn)
                {
                  ans1=a[i];
                }
                
            }
            cnt=0;
        }     
    }

    return ans1;

}

int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    vector<int> a;
    cout<<"Enter the elements of  ";

    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        a.push_back(v);
    }

    int ans=MaxFrequency1(a);

    cout<<ans;

    return 0;
}
