/*************************************************************************
	> File Name: 119.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 20时16分20秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int y, m, d;
    scanf("%d%d%d",&y, &m, &d);
    if (m>1 && m<12)
    {
    if (m != 2)
        {
            if (m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
            {
            if (d>1 && d<31)
                {
                printf("%d %d %d\n%d %d %d", y, m, d -1, y, m, d+1);
                }
                else
                {
                if (d == 31)
                    {
                    printf("%d %d %d\n%d %d 1", y, m, d-1, y, m+1);
                    }
                    else
                    {
                    if (d == 1)
                        {
                            if(m-1 == 3 || m == 5 || m == 7 || m == 8 || m == 10)
                            {
                            printf("%d %d 31\n%d %d %d", y, m-1, y, m, d+1);
                            }
                            else
                            {
                                if (m-1 == 2)
                                {
                                   if ((y%100 != 0 && y%4 == 0) ||( y%400 == 0))
                                    {
                                    printf("%d %d 29\n%d %d %d", y, m-1,  y, m, d+1);
                                    }
                                    else 
                                    {
                                    printf("%d %d 28\n%d %d %d", y, m-1, y, m, d+1);
                                    }
                                }
                            }
                        }
                    }
                }

            }
            else 
            {
            if (d>1 && d<30)
                {
                printf("%d %d %d\n%d %d %d", y, m, d-1, y, m, d+1);
                }
                else
                {
                if (d == 1)
                    {
                    if (m-1 == 3 || m-1 == 5 || m-1 == 8 || m-1 == 10)
                        {
                        printf("%d %d 31\n%d %d %d", y, m-1, y, m, d+1);
                        }
                        else
                        {
                        printf("%d %d 30\n%d %d %d", y, m-1, y, m, d+1);
                        }
                    }
                    else
                    {
                    if (d == 30)
                        {
                        printf("%d %d %d\n%d %d 1", y, m, d-1, y, m+1);
                        }
                    }
                }
            }
        }
        else
        {
        if ((y%100 != 0 && y%4 == 0) ||( y%400 == 0))
            {
                if (d>1 && d<29)
                {
                printf("%d %d %d\n%d %d %d", y, m, d-1, y, m, d+1);
                }
                else
                {
                if (d == 29)
                    {
                    printf("%d %d %d\n%d %d 1", y, m, d-1, y, m+1);
                    }
                    else
                    {
                    if (d == 1)
                        {
                        printf("%d %d 31\n%d %d %d", y, m-1, y, m, d+1);
                        }
                    }
                }
            }
            else 
            {
            if (d>1 && d<28)
                {
                printf("%d %d %d\n%d %d %d", y, m, d-1, y, m, d+1);
                }
                else
                {
                if (d == 28)
                    {
                    printf("%d %d %d\n%d %d 1", y, m, d-1, y, m+1);
                    }
                    else
                    {
                    if(d == 1)
                        {
                        printf("%d %d 31\n%d %d %d", y, m-1,  y, m, d+1);
                        }
                    }
                }
            }
        }
    }
    else 
    {
    if (m == 1)
        {
        if (d>1 && d<31)
            {
            printf("%d %d %d\n%d %d %d", y, m, d-1, y, m, d+1);
            }
            else
            {
            if (d == 1)
                {
                printf("%d 12 31\n%d %d %d", y-1, y, m, d+1);
                }
                else
                {
                if (d == 31)
                    {
                    if((y%100 != 0 && y%4 == 0) || (y%400 == 0))
                        {
                        printf("%d %d %d\n%d %d 29", y, m, d-1, y, m+1);
                        }
                        else
                        {
                        printf("%d %d %d\n%d %d 28", y, m, d-1, y, m+1);
                        }
                    }
                }
            }
        }
        else
        {
        if (m == 12)
            {
            if (d>1 && d<31)
                {
                printf("%d %d %d\n%d %d %d", y, m, d-1, y, m, d+1);
                }
                else
                {
                if (d == 1)
                    {
                    printf("%d 11 30\n%d %d %d", y, y, m, d+1);
                    }
                    else
                    {
                    if (d == 31)
                        {
                        printf("%d %d %d\n%d 1 1", y, m, d-1, y+1);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
