#include<bits/stdc++.h>
using namespace std;

int main(){

int a[] = {2,6,7,3};

int x = upper_bound(a,a+4,6) - a;

cout << x;
}
