/*************************************r************************************
	> File Name: 115.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 09时05分18秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int x,y;

    scanf("%d%d",&x,&y);
    if (x==y)
    {
    printf("100");
    }
    else
    {
    if (x/10==y%10&&x%10==y/10)
        {
        printf("20");
        }
        else 
        {
        if (x/10==y/10 || x%10 == y/10 || x/10==y%10 ||x%10 == y%10)
            {
            printf("10");
            }
            else
            {
            printf("0");
            }

        }
    }
    return 0;
}