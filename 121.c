/*************************************************************************
	> File Name: 121.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 13时57分44秒
 ************************************************************************/

#include<stdio.h>
int main()
{
char a,b,O,Y,H;
    scanf("%c%c", &a, &b);
    if (a == 'O' && b == 'O')
    {
    printf("TIE");
    }
    else
    {
    if(a == 'O' && b == 'Y')
       {
       printf("MING");
       }
        else
        {
        if(a == 'O' && b == 'H')
            {
            printf("LI");
            }
            else
            {
            if(a == 'Y' && b == 'Y')
                {
                printf("TIE");
                }
                else
                {
                if(a == 'Y' && b == 'O')
                    {
                    printf("LI");
                    }
                    else
                    {
                    if(a == 'Y' && b == 'H')
                        {
                        printf("MING");
                        }
                        else
                        {
                        if(a == 'H' && b == 'H')
                            {
                            printf("TIE");
                            }
                            else
                            {
                            if (a == 'H' && b == 'O')
                                {
                                printf("MING");
                                }
                                else 
                                {
                                    if (a == 'H' && b == 'Y')
                                    {
                                        printf("LI");
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
