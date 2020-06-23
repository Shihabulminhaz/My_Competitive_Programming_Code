#include <bits/stdc++.h>

using namespace std;

int n,latest[2];
array<int,3>a[2500]= {};
char ch[2]= {'C','J'},ans[2500]= {};

void solution()
{
    scanf("%d",&n);
    for(int i=0; i<n; ++i)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
        a[i][2]=i;
    }
    sort(a,a+n);

    latest[0]=10000000;
    latest[1]=10000000;

    for(int i=n-1; i>=0; i--)
    {
        bool flag=false;
        int p1=0,p2=1;
        if(latest[p1]>latest[p2])
            swap(p1,p2);
        if(a[i][1]<=latest[p1])
        {
            flag=true;
            ans[a[i][2]]=ch[p1];
            latest[p1]=a[i][0];
        }
        if(!flag&&a[i][1]<=latest[p2])
        {
            flag=true;
            ans[a[i][2]]=ch[p2];
            latest[p2]=a[i][0];
        }
        if(!flag)
        {
            printf("IMPOSSIBLE\n");
            return ;
        }
    }

    for(int i=0; i<n; i++)
        cout<<ans[i];
    printf("\n");
}



int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int i=1; i<=testcase; i++)
    {
        printf("Case #%d: ",i);
        solution();
    }
    return 0;
}
