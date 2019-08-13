/*************************************************************************
	> File Name: 7.25.1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 15时40分43秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int n;
    scanf("%d",&n);
    if (n==0)
    {
    printf("FOOLISH");
    }else if (n<60)
    {
    printf("FALL");
    } else if(n<75)
    {
    printf("MEDIUM");
    }else printf("GOOD");
    return 0;
}
