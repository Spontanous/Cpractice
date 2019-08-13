/*************************************************************************
	> File Name: 121.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月26日 星期五 12时56分27秒
 ************************************************************************/

#include<stdio.h>
int main()
{
char a,b;
    scanf("%c %c", &a, &b);
    if (a == b) {
    printf("TIE\n");
    } else if ((a == 'O' && b == 'Y') || 
             (a == 'Y' && b == 'H') ||
             (a == 'H' && b== 'O')) {
    printf("MING\n");
    } else {
        printf("LI\n");
    }
    return 0;
}
