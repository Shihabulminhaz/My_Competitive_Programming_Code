#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define max 10000007

bool isMarked[max+5];

void sieve(int N)
{
    isMarked[1] = 1;
    for(int i = 2; i * i<=N; i++)
    {
        if(isMarked[i]==0)
        {
            for(int j = i * i; j<=N; j = j+i)
            {
                isMarked[j] = 1;
            }
        }
    }
}

int main()
{

    int n,cnt,ans=0;
    cin >> n;
    sieve(n);
    for(int i = 2; i<=n; i++)
    {
        cnt = 0;
        if(isMarked[i] == 1)
        {
            for(int j = 2; j<=i/2; j++)
            {
                if(isMarked[j] == 0)
                {
                    if(i%j==0)
                        cnt++;
                       // cout << "i = " << i  << " " << "j = " << j << "\n";
                }

            }
            if(cnt==2)
                ans++;

            //cout << i << " " << cnt << "\n";
        }
    }
    cout << ans << "\n";
    return 0;
}

