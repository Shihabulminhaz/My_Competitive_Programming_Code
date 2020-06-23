#include<bits/stdc++.h>
using namespace std;
int arr[10000];

int main()
{
    int t,xx,yy;
    cin>>t;
    while(t--)
    {
        int a=0,b=0,x,n,sum=0;
        cin>>n>>x;
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
            if(arr[j]%2 == 0)
            {
                b++;
            }
            else
            {
                a++;
            }
        }


        if(a==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(a%2==0 && x==n)
            {
                cout<<"NO"<<endl;
            }
            else if(x%2==0 && b==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }

    }

    return 0;
}
