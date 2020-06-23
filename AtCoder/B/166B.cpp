#include<bits/stdc++.h>
using namespace std;

int arr[102];
int main()
{

    int n,k,x,a,cnt=0;
    scanf("%d%d",&n,&k);
    while(k--)
    {
        scanf("%d",&x);
        {
            for(int i=1; i<=x; i++)
            {
                scanf("%d",&a);
                arr[a] = 1;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(!arr[i])
            cnt++;
    }

    printf("%d\n",cnt);
    return 0;
}

