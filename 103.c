/*************************************************************************
	> File Name: 103.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 16时22分45秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
int a, b, i;
    scanf("%d%d", &a, &b);
    i = a%b ;
    if (i == 0)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
    return 0;
}
