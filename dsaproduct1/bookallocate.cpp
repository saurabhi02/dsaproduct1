#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isfeasiable(vector<int> a,int k,int mid)
{
    int student=1,sum=0;
    for(int i=0;i<a.size();i++)
    {
        if(sum+a[i]>mid)
        {
            student++;
            sum=a[i];
        }
        else
        sum+=a[i];


    }

    return student<=k;
}
int sumof(vector<int> a)
{
    int sum=0;
    for(int i=0;i<a.size();i++)
    sum+=a[i];
    return sum;
}

int bookallocate(vector<int> a,int k)
{
    int n=a.size();
    int min=*max_element(a.begin(),a.end());
    int max=sumof(a);
    int res=0;
    while(min<=max)
    {
        int mid=(max+min)/2;
        if(isfeasiable(a,k,mid))
        {
            res=mid;
            max=mid-1;
        }
        else
        min=mid+1;
    }

    return res;


}

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int u;
        cin>>u;
        a.push_back(u);
    }
    cout<<"enter k";
    int k;
    cin>>k;
    int ans=bookallocate(a,k);
    cout<<ans;
    return 0;
}