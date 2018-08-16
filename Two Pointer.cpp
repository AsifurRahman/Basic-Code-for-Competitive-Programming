#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,x;
    cin>>n>>m>>x;
    int a[1005],b[1005];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<m;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    i=0,j=m-1;
    int cnt=0;
    while(i<n){
        while(a[i]+b[j]>x && j>0)j--;
            if(a[i]+b[j]==x)cnt++;
            i++;
    }
    cout<<cnt<<endl;
    return 0;
}
