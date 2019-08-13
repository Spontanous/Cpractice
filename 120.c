/*************************************************************************
	> File Name: 120.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月26日 星期五 10时18分04秒
 ************************************************************************/


#include<stdio.h>
int main()
{
int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    if (d>= -10 && y<= 3000)
    {
    if (m>0 && m<=12)
        {
        if (m != 2)
            {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                {
                if (d>0 && d<= 31)
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
                if (d>0 && d<=30)
                    {
                    printf("YES");
                    }
                    else
                    {
                    printf("NO");
                    }
                }
            }
            else 
            {
            if ((y%100 != 0 && y%4 == 0) || (y%400 == 0))
                {
                if (d>0 && d <=29)
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
                if (d>0 && d<= 28)
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
        else 
        {
        printf("NO");
        }
    }
    else
    {
    printf("NO");
    }

return 0;
}

