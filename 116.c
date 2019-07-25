/*************************************************************************
	> File Name: 116.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 15时17分30秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b > c && a+c>b && b+c>a)
    {
    if (a>=b&a>=c)
        {
        if(a*a<b*b+c*c)
            {
            printf("acute triangle");
            }
            else
            {
            if(a*a==b*b+c*c)
                {
                printf("right angle");
                }
                else
                {
                printf("obtuse triangle");
                }
            }
        }


        else 
        {
        if (b>=a&&b>=c)
            {
            if(b*b<a*a+c*c)
                {
                printf("acute triangle");
                }
                else 
                {
                if(b*b==a*a+c*c)
                    {
                    printf("right triangle");
                    }
                    else
                    {
                    printf("obtuse triangle");
                    }
                }
            }
            else
            {
            if(c>=b&&c>=a)
                {
                if(c*c<a*a+b*b)
                    {
                    printf("acute triangle");
                    }
                    else
                    {
                    if(c*c==a*a+b*b)
                        {
                        printf("right triangle");
                        }
                        else
                        {
                        printf("obtuse triangle");
                        }
                    }
                }
            }
        }
    }

  else 
    {
    printf("illegal triangle");
    }
}
          
