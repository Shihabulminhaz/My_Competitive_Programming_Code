#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{

    if(b!=0){
            cout << a << " " << b << endl;
        return gcd(b,a%b);
    }
    else{
            cout << a << " " << b << endl;
        return a;
    }
}

int main()
{

    int x,y,g ;

    cin >> x >> y;

    g = gcd(x,y);

    cout << g << "\n";

}
