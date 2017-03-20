#include<bits/stdc++.h>
using namespace std;
void PowerSet(ll a[], int set_size)
{
    ll pow_set_size = 1<<set_size;
    for(ll counter = 0; counter < pow_set_size; counter++)
    {
      for(ll j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
          {

          }
       }
    }
}
int main()
{
    char set[] = {'a','b','c'};
    printPowerSet(set, 3);

    getchar();
    return 0;
}
