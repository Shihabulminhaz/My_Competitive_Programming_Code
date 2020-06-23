#include<bits/stdc++.h>
using namespace std;
#define max 100007

long int Fibonacci(long int j,long int n)
{
    long int fibo[n+2];
    if(j)
    fibo[1] = 0;
    fibo[2] = 1;
    for (long long int i = 3; i <= n; i++)
    {
        fibo[i] = (fibo[i-1]%100000 + fibo[i-2]%100000)%100000;
    }
    return fibo[n];
}
int main ()
{

    long int n,t,a,b;
    int j;
    cout << "Enter number of terms: ";
    scanf("%ld,",&t);
    long int arr[max];
    for(int i=0; i<t; i++)
    {
        scanf("%ld%ld",&a,&b);

        if((b+1) > 100)
        {
                Fibonacci(a,100);
        }
        else
        {
            for(n=a; n<=a+b; n++)
            {
                Fibonacci(a,b+1);
            }
        }
        sort(arr,arr+n);
        cout << arr[0];
    }
}

