#include<stdio.h>
int main()
{
    char str = '2';
	int x;
    sscanf(str, "%d", &x);
    printf("\nThe value of x : %d", x);
	return 0;
}
