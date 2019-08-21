/*************************************************************************
	> File Name: 163.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 15时06分08秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    double PI = acos(-1);
    long long a, b, t;
    scanf("%lld%lld%lld", &a, &b, &t);
    double c;
    c = sqrt(a * a + b * b - 2 * a * b * cos(t * PI / 180));
    printf("%.6f\n", c);
    return 0;
}
