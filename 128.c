/*************************************************************************
	> File Name: 128.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 16时19分55秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int n,  i, m;
   double  sum = 0;
    scanf("%d\n", &n);
    for (i = 1; i <= n; i++){
        scanf("%d", &m); 
        sum = sum +m;    
    }
    printf("%.2lf", sum/n);

    return 0;
}
