#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int x[n];
    for(i=1;i<=n;i++)
        cin>>x[i];
    int p = 0, s = 0;
    for (int k = 1; k <= n; k++)
    {
        s = max(x[k],s+x[k]);
        cout<<s<<endl;
        p = max(p,s);
    }
    cout << p << "\n";
    return 0;
}
