#include<bits/stdc++.h>
using namespace std;
#define pi 3.14
int a[1000],b[1000];

int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,k;
        cin>>n>>k;
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        sort(a, a+n);

        for(int j=0; j<n; j++)
        {
            cin>>b[j];
        }
        sort(b, b+n);
        int m = n-1;
        int c = 0;
        int sum = 0;
        for(int j=0; j<k; j++)
        {
            if(a[c] < b[m])
            {
                swap(a[c],b[m]);
                c++;
                m--;
            }
        }
        for(int j=0; j<n; j++)
        {
            sum = sum + a[j];
        }
        cout<<sum<<endl;
    }

    return 0;
}
