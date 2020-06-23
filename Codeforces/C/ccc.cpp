#include<bits/stdc++.h>
using namespace std;
#define fi(a) scanf("%d",&a);
#define fli(a) scanf("%ld",&a);
#define fll(a) scanf("%lld",&a);
#define pi(a) printf("%d\n",a);
#define ppi(i,a) printf("Case %d: %d\n",i,a);
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast
    int t,n,testing,store;
    cin >> t;
    while(t--)
    {
        int testing=0;
        bool flag = false;
        cin >> n;
        if(n==1){
            cout << "FastestFinger\n";}
        else if(n==2){
            cout << "Ashishgup\n";}
        else if(n%2)
        {
            cout << "Ashishgup\n";
        }
        else
        {
            int xxx;
            while(true)
            {
                flag = false;
                for(int i=2; i*i<=n; i++)
                {
                    if(n%i==0)
                    {
                        if((i)%2==1)
                        {
                            flag = true;
                            xxx = n;
                            n=i;
                        }
                        if((xxx/i)%2==1)
                        {
                            flag = true;
                            n=(xxx/i);

                        }
                    }
                }
                if(!flag)
                {
                    break;
                }
                testing++;
            }

            if(n==2)
            {
                if(testing%2==1)
                {
                    cout << "FastestFinger\n";
                }
                else
                {
                    cout << "Ashishgup\n";
                }
            }
            else
            {
                if(testing%2==0)
                {
                    cout << "FastestFinger\n";
                }
                else
                {
                    cout << "Ashishgup\n";
                }
            }

        }
    }

    return 0;
}

