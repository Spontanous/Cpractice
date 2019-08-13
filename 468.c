/*************************************************************************
	> File Name: 468.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时28分20秒
 ************************************************************************/

#include<stdio.h>
int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", gcd(n, m));
    return 0;
}
