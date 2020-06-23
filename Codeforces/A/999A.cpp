#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    deque<int>dq;
    int n,k,a,cnt=0;
    cin >> n >> k;
    for(int i=0; i<n;i++)
    {
        cin >> a;
        dq.push_back(a);
    }

    while(!dq.empty())
    {
        if(dq.front()<=k)
        {
            cnt++;
            dq.pop_front();
        }
        else
            break;
    }

     while(!dq.empty())
    {
        if(dq.back()<=k)
        {
            cnt++;
            dq.pop_back();
        }
        else
            break;
    }
    cout << cnt << endl;
    return 0;
}

