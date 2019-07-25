/*************************************************************************
	> File Name: 117.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 09时56分38秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
int a;
    scanf("%d", &a);
    if (a<10)
    {
    printf("YES");
    }
    else
    {
    if (a<100)
        {
        if(a/10 == a%10)
            {
            printf("YES");
            }
            else
            {
            printf("NO");
            }
        }
        else
        {
        if(a<1000)
            {
            if(a/100 == a%10)
                {
                printf("YES");
                }
                else
                {
                printf("NO");
                }
            }
            else
            {
            if(a<10000)
                {
                if(a/1000 == a%10 && a%1000/100 == a%1000%100/10)
                    {
                    printf("YES");
                    }
                    else
                    {
                    printf("NO");
                    }
                }
            }
        }

    }




    return 0;



}
