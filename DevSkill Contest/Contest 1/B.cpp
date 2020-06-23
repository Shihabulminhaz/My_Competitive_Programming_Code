#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
    int t,n,i,k,cnt;

    scanf("%d",&t);
    while(t--)
    {
        cnt = 0;
        scanf("%d%d",&k,&n);
        for(i=0; i<k; i++)
        {
            scanf("%d",&a[i]);

        }

        for(i=0; i<k; i++)
        {
            if(a[n-1]>a[i])
                cnt++;
        }

        printf("%d\n",cnt+1);
    }
}
