#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cnt;
void call(ll n){
    if(n==2)
        return;
    call(n-1);
    cnt++;
    cout<<n<<endl;
}
int main()
{
    ll a,n,m;
    cin>>n;
    cnt=0;
    call(n);
    cout<<cnt<<endl;
    return 0;
}
