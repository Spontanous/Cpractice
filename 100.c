/*************************************************************************
	> File Name: 100.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 13时56分47秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int n, i;
    float sum;
    sum = 0;
    scanf("%d", &n);
    for (i = 1 ; i <= 6; ++i)
    {
        sum =  (sum + n)*(1+0.00417);
    }
    printf("$%.2f", sum);
    return 0;
}
