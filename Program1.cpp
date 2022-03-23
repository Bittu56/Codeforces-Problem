#include<iostream>
using namespace std;
#include<vector>
#include<stack>
#include<algorithm>
#include<functional>

int solve(int k)
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a.begin(),a.end());
cout<<a[n-1]+a[n-2]<<endl;
return 0;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
    int tc;
    cin>>tc;
    for(int tt=1;tt<=tc;tt++)
    {
        solve(tt);
    }
    return 0;
}
