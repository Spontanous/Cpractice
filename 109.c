/*************************************************************************
	> File Name: 109.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 17时30分23秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
int n, i;
    scanf("%d", &n);
    i = n/1000%2 == 0 || n%1000/100%2 == 0 || n%1000%100/10%2 == 0 || n%10%2 == 0;
    if (i == 1)
    {
        printf("YES");
    }
    else 
    {
    printf("NO");
    }
    return 0;
}