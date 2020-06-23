#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

int num;
int gettrailingzero(long int n)
{
    long int twocount,fivecount;
    twocount = fivecount = 0;
    long int base = 2;
    while(n>0)
    {
        twocount = twocount + (n/base);

        if(n<base)
        {
            break;
        }
        base = base * 2;
    }

    base = 5;
    while(n>0)
    {
        fivecount = fivecount + (n/base);
        if(n<base)
        {
            break;
        }
        base = base * 5;
    }
    return min(twocount,fivecount);
}


int lower(int start,int end)
{

    int n,mid;
    if(start>end)
        return -1;

    mid = start+(end-start)/2;
    n = gettrailingzero(mid);
    if(n>num)
    {
        return lower(start,mid-1);
    }
    else if(n<num)
    {
        return lower(mid+1,end);
    }
    else if(n==num)
    {
        while(gettrailingzero(mid) == num)
        {
            mid--;
        }
        return ++mid;
    }
}


int main()
{

    int t,i,ans;
    fi(t);
    for(i=1; i<=t; i++)
    {
        fi(num);
        ans = lower(1,INT_MAX);
        if(ans != -1)
        {
            ppi(i,ans)
        }
        else
        {
            printf("Case %d: impossible\n",i);
        }
    }
    return 0;
}

