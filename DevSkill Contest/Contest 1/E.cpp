#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,a[101],count=0,temp,min_ele;
    cin >> n;
    for( i=0; i<n; i++)
    {
        cin >> a[i];
    }

   for(i=0; i<n-1; i++)
    {
        min_ele = i;
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                min_ele = j;
            }
        }
        swap(a[i],a[min_ele]);
    }
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n" << count << "\n";
}

