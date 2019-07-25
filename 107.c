/*************************************************************************
	> File Name: 107.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 16时45分51秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
int n, i;
    scanf("%d", &n);
    i = (n%7 == 0) && (n%2 != 0);
    if (i == 1)
    {
    printf("YES");
    }
    else{
    printf("NO");
    }
    return  0;
}
