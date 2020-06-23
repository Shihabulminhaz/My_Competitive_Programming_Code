#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int t,i,n,a,b,c,d,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d) cout << 0 << endl;

        else if(a==c || b==d)
        {
            cout<<1<<endl;
        }
        else
        {
            if(c>a) swap(a,c);
            if(d>b) swap(b,d);
            n = a-c + b-d;
            cout<< n <<endl;
        }

    }

    return 0;
}


