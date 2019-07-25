/*************************************************************************
	> File Name: 114.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月23日 星期二 19时49分41秒
 ************************************************************************/

#include<stdio.h>
int main()
{
char x, h, l, c, d, w;
    scanf("%c", &x);
   if (x == 'h')
    {
    printf("He");
    }
    else 
    {
    if(x == 'l')
        {
        printf("Li");
        }
        else
        {
        if (x=='c')
            {
            printf("Cao");
            }
            else
            {
            if(x=='d')
                {
                printf("Duan");
                }
                else
                {
                if (x=='w')
                    {
                    printf("Wang");
                    
                    }
                    else 
                    {
                    printf("Not Here");
                    }
                }
            }
        }
    }
  
    return 0;

}
