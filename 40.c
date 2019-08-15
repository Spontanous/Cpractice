/*************************************************************************
	> File Name: 40.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月14日 星期三 20时06分48秒
 ************************************************************************/

#include<stdio.h>

#include <stdio.h>
#include <stdlib.h>
int f(int n);
int main()
{
    int n,t;
    scanf("%d",&n);
    t=f(n);
    printf("%d",t);
    return 0;
}
int f(int n)
{
    long s;
    if(n==1)
        s=1;
    else if(n==2)
        s=2;
    else
        s=f(n-2)+f(n-3);
    return s;
}
