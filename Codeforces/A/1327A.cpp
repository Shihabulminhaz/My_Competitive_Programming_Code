#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a,b;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        if(a==1 && b==1)
            cout << "YES\n";
        else if((a%2==0 && b%2==0) || (a%2==1 && b%2==1))
        {
            if(a/b<b)
            {
                cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
