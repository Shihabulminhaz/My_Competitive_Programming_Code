#include<bits/stdc++.h>
using namespace std;
#define pi 3.14164545
int arr[1000];

int main()
{

    int n,t,bal=23,dif,x,a,b;
    cin >> n;
    while(n--){
        cin >>t;
        a=0;
        b=0;
        for(int j=0; j<t; j++)
        {
            cin>>arr[j];
            if(arr[j]%2 == 0)
            {
                a++;
            }
            else
            {
                b++;
            }

        }
        sort(arr, arr+t);
        x = 1;

        if(a%2==0 && b%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int j=0; j<t-1; j++)
            {
                dif = arr[j+1] - arr[j];
                if(dif == 1)
                {
                    cout<<"YES"<<endl;
                    x = 1;
                    break;
                }
                else
                {
                    x = 0;
                }
            }

        }
        if(x == 0)
            {
                cout<<"NO"<<endl;
            }

    }
    return 0;
}
