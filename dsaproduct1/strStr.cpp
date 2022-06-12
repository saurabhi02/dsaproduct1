#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int strStr(string s,string s1)
{
    int ans=0;
    int n=s.length();
    int m=s1.length() ;
    int k=0;
    for(int i=0;i<n;i++)
    {
        
        string s2=s.substr(i,m);
        // cout<<s2<<" "<<i<<" "<<i+m<<endl;
        if(s2==s1)
        return i;
        
    
    }


    return ans;
}
int main()
{
    string s,s1;
    cin>>s>>s1;
    int ans=strStr(s,s1);
    
    cout<<ans;
    return 0;
}