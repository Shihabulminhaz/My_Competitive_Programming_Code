#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<int>vec[300005];
int main() {
    int n,q,x,y,k,a;
    cin >> n >> q;
    for(int i=0;i<n;i++){
        cin >> k;
        for(int j=0;j<k;j++){
            cin >> a;
            vec[i].push_back(a);
        }
    }
    for(int i=0;i<q;i++){
        cin >> x >> y;
        cout << vec[x][y] << endl;
    }
    return 0;
}
