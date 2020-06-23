#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10000007
#define pi 3.1416

int main()
{

    ll t,n,a,b,x,y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        cin >> a >> b;
        if(x==0 && y==0)
            cout << 0 << endl;
        else
        {
            if(x==y)
            {
                if(b<=2*a){
                    cout << b * x << endl;
                }
                else{
                    cout << x*a + y*a << endl;
                }
            }
            else if(x>y)
            {

               if(a>=b){
                 cout << y*b + (x-y)*a << endl;
               }
               else if(b>=2*a){
                 cout << a*x+a*y << endl;
               }
               else if(b<2*a){
                 cout << y*b + (x-y)*a << endl;
               }
            }
            else
            {
                if(a>=b){
                 cout << x*b + (y-x)*a << endl;
               }
               else if(b>=2*a){
                 cout << a*y+a*x << endl;
               }
               else if(b<2*a){
                 cout << x*b + (y-x)*a << endl;
               }
            }
        }

    }
    return 0;
}

