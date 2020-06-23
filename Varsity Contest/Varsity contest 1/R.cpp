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
    int n,a,total,sum;
    priority_queue<int,vector<int>,greater<int>>PQ;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        total=0;
        sum=0;
        while(n--)
        {
            cin>>a;
            PQ.push(a);
        }
        while(PQ.size()!=1)
        {
            total=PQ.top();
            PQ.pop();
            total= total + PQ.top();
            PQ.pop();
            sum = sum + total;
            PQ.push(total);
        }
        cout<< sum <<endl;
        PQ.pop();
    }
    return 0;
}
