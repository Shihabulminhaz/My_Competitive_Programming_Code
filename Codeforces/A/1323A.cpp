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

    int t,n,arr[101],odd,even,i,test;
    cin >> t;
    while(t--)
    {
        odd=test=0;
        vector<int>vec;
        cin >> n;
        for(i =0; i<n; i++)
        {
            cin >> arr[i];
        }
        if(n==1)
        {
            if(arr[0]%2==1)
                cout << -1 << endl;
            else
                cout << 1 << "\n" << 1 << endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(arr[i]%2==1)
                {
                    odd++;
                    vec.push_back(i+1);
                    if(odd==2)
                    {
                        test = 1;
                        break;
                    }
                }
                else
                {
                    cout << 1 << "\n" << i+1 << endl;
                    break;
                }
            }
            if(test == 1)
                cout << 2 << "\n" << vec[0] << " " << vec[1] << endl;
        }
    }
    return 0;
}

