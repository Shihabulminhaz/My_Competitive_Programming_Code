#include<bits/stdc++.h>
using namespace std;

const int N = 505;
long long f[N];

string cf = "codeforces";

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long xxx = 1024;
    for(long long kk=1; kk<=10; kk++)
    {
        // cin>>k;
        memset(f,0,505);

        long long k;
        xxx*=2;
        k = xxx;
        for (int i=0; i<N; i++)
        {
            int beshi = i%10, kom = 10-i%10;
            f[i] = 1;
            for (int j=0; j<kom; j++)
                f[i] *= i/10;
            for (int j=0; j<beshi; j++)
                f[i] *= i/10+1;

            if (f[i] < k)
                continue;

            string ans;
            for (int j=0; j<kom; j++)
            {
                for (int k=0; k<i/10; k++)
                    ans += cf[j];
            }
            for (int j=kom; j<10; j++)
            {
                for (int k=0; k<=i/10; k++)
                    ans += cf[j];
            }
            cout<<ans<<endl;
            break;
           // continue;
        }

    }
}
