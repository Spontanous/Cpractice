/*************************************************************************
	> File Name: 102.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月22日 星期一 14时41分17秒
 ************************************************************************/

#include<stdio.h>
int main()
{
float  a, b, c, t;
    scanf("%f%f%f%f", &a, &b, &c, &t);
    printf("%.2f", c*(a*b-(a+b)*t)/((a+b)*c-a*b)+t);
    return 0;
}
