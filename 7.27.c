/*************************************************************************
	> File Name: 7.27.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 19时09分55秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int n, i, x;
    x = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
    x = x*i;
    }
    printf("%d", x);
    return 0;
} 
