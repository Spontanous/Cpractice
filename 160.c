/*************************************************************************
	> File Name: 160.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 01时17分34秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
    int r, h;
    double s;
    scanf("%d%d", &r, &h);
    s = (4 + PI) * r * r + (2 * sqrt(2) + 2 + PI) * r * h;
    printf("%.2lf\n", s);
    return 0;
}
