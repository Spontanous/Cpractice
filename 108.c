/*************************************************************************
	> File Name: 108.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 17时04分48秒
 ************************************************************************/

#include<stdio.h>
 int main()
 {
 double m,n;
     char r,t,x;
     scanf("%c\n%lf%lf",&x,&m,&n);
     if (x =='r')
     {
     printf("%.2f",m*n);
     }
     else if(x == 't')
     {
     printf("%.2f",m*n/2);
     }
     return 0;
 }
