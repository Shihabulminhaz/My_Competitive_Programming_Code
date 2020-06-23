#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,arr[1005];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    cout << arr[(n+1)/2-1] << endl;
    return 0;
}
