#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[5],i,b[3],x,y,k,q,z;
    while(cin >> a[0] >> a[1] >> a[2] >> x >> y)
    {
        k=0,q=0;
        if(a[0]==0)
            break;

        sort(a,a+3);
        if(x>y)
            swap(x,y);


            for(i=2;i>=0;i--){
                if(a[i]<y){
                    k++;
                }
            }
        cout << "-1" << "\n";
        int check = 1;
        for(i=0;)
        if(a[i]==check || a[i+1]==check || a[i+2]==check || x==check || y==check)
        if(a[2]<y) k++;
        else k++;
        if(a[1]<x) q++
            else k++;
            if(q==2) cout << "-1" << "\n";
            if(q==1){
                if(y!=52)
                z = 52;
                if()
            }
        sum = a[0]+a[1]+a[2];
        sum - a[2];


        for(i=0;i<3;i++){
            cout << a[i];
        }
    }
}
