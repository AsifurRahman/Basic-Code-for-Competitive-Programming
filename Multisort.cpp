#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct data{
    ll a,b;
};
data p[100];

bool cmp(data f,data s){
    if(f.a!=s.a)
        return f.a<s.a;
    return f.b<s.b;
}
int main()
{
    ll i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p[i].a>>p[i].b;
    }
    sort(p,p+n,cmp);
    for(i=0;i<n;i++){
        cout<<p[i].a<<" "<<p[i].b<<endl;
    }
}
