/*************************************************************************
	> File Name: 118.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 18时16分10秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int year, i;
    scanf("%d", &year);
   if (year >= 1900)
    {
    if ((year - 1900)%12 == 0)
        {
        printf("rat");
        }
        else 
        {
        if ((year-1901)%12 == 0)
            {
            printf("ox");
            }
            else
            {
            if ((year-1902)%12 == 0)
                {
                printf("tiger");
                }
                else
                {
                if ((year-1903)%12 == 0)
                    {
                    printf("rabbit");
                    }
                    else
                    {
                    if ((year -1904)%12 == 0)
                        {
                        printf("dragon");
                        }
                        else
                        {
                        if ((year - 1905)%12 == 0)
                            {
                            printf("snake");
                            }
                            else 
                            {
                            if ((year - 1906)%12 == 0)
                                {
                                printf("horse");
                                }
                                else
                                {
                                if((year-1907)%12 == 0)
                                    {
                                    printf("sheep");
                                    }
                                    else
                                    {
                                    if ((year-1908)%12 == 0)
                                        {
                                        printf("monkey");
                                        }
                                        else 
                                        {
                                        if ((year - 1909)%12 == 0)
                                            {
                                            printf("rooster");
                                            }
                                            else
                                            {
                                            if ((year-1910)%12 == 0)
                                                {
                                                printf("dog");
                                                }
                                                else
                                                {
                                                printf("pig");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    
    }
    else
    {
    if((1900-year)%12 == 0)
        {
        printf("rat");
        }
        else
        {
        if ((1901-year)%12 == 0)
            {
            printf("ox");
            }
            else
            {
            if((1902-year)%12 == 0)
                {
                printf("tiger");
                }
                else
                {
                if((1903-year)%12 == 0)
                    {
                    printf("rabbit");
                    }
                    else
                    {
                    if ((1904-year)%12 == 0)
                        {
                        printf("dragon");
                        }
                        else
                        {
                        if ((1905-year)%12 == 0)
                            {
                            printf("snake");
                            }
                            else
                            {
                            if((1906-year)%12 == 0)
                                {
                                printf("horse");
                                }
                                else
                                {
                                if((1907-year)%12 == 0)
                                    {
                                    printf("sheep");
                                    }
                                    else
                                    {
                                    if ((1908-year)%12 == 0)
                                        {
                                        printf("monkey");
                                        }
                                        else
                                        {
                                        if ((1909-year)%12 == 0)
                                            {
                                            printf("rooster");
                                            }
                                            else
                                            {
                                            if((1910-year)%12 == 0)
                                                {
                                                printf("dog");
                                                }
                                                else
                                                {
                                                printf("pig");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }


return 0;

}
