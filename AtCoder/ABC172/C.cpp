
#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void FI()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\SHIHAB\\Deskfront\\input.in","r",stdin);
#endif // ONLINE_JUDGE
}
queue<ll>stk1,stk2;
 ll n,m,k,a,sum=0,ans=0;
int main()
{
    fast
    //  FI(); /// skip this line for compile


    cin >> n >> m >> k;
    for(ll i=0; i<n; i++)
    {
        cin >> a;
        stk1.push(a);
    }
    for(ll i=0; i<m; i++)
    {
        cin >> a;
        stk2.push(a);
    }
for(int i=0;i<n;i++) {sum+=arr[i];if(sum>k) break; x++;}
for(int i=0;i<m;i++) {sum+=arr[i];if(sum>k) break; x++;}
    while(true){
        arr[]
    }
    while(true)
    {
        if(stk1.empty() && stk2.empty())
        {
            break;
        }
        else if(stk1.empty())
        {
            sum+=stk2.front();
            stk2.pop();
        }
        else if(stk2.empty())
        {
            sum+=stk1.front();
            stk1.pop();
        }
        else if(stk1.front()<=stk2.front())
        {
            sum+=stk1.front();
            stk1.pop();
        }
        else
        {
            sum+=stk2.front();
            stk2.pop();
        }
        //  cout << sum << endl;
        if(sum>k)
        {
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}

