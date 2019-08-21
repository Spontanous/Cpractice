/*************************************************************************
	> File Name: 164.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 15时34分27秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
   
    printf("%d\n",(int)ceil((double)n / m));
    return 0;
}
