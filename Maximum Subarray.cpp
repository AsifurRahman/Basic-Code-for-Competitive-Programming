#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int x[n];
    for(i=1;i<=n;i++)
        cin>>x[i];
    int max_so_far = 0, cur_max = 0;
    for (int k = 1; k <= n; k++)
    {
        cur_max = max(x[k], cur_max+x[k]);
        cout<<s<<endl;
        max_so_far = max(max_so_far, cur_max);
    }
    cout << max_so_far<< "\n";
    return 0;
}
