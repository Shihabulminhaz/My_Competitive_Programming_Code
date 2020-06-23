#include<bits/stdc++.h>
using namespace std;

long int arithmetic(long int a,long int b,string x)
{
    if(x=="+")
    {
        printf("%d\n",a+b);
        return a+b;
    }
    if(x=="-")
    {
        printf("%d\n",b-a);
        return b-a;
    }
    if(x=="*")
    {
        printf("%d\n",a*b);
        return a*b;
    }
    if(x=="/")
    {
        printf("%d\n",b/a);
        return b/a;
    }
}


int main()
{

    long int y,a,b;
    stack<long int>stk;
    string x;
    while(cin >> x)
    {
        if(x=="+" || x=="-" || x=="*" || x=="/")
        {
            a = stk.top();
            stk.pop();
            b = stk.top();
            stk.pop();
            int z = arithmetic(a,b,x);
            stk.push(z);
        }
        else
        {
            int z = stoi(x);
            stk.push(z);
        }
    }
}


