#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int la(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;;i++)
    {
        if(la(i)==10)
        {
            cnt++;
            if(cnt==n)
            {
                cout<<i;
                break;
            }
        }
    }
    return 0;
}
