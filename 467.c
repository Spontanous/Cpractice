/*************************************************************************
	> File Name: 467.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时23分18秒
 ************************************************************************/

#include<stdio.h>


int main(){
   int   n;
    scanf("%d", &n);
    long long  ans = 1;
    for(int i = 1; i <= n; i++){

        ans *= i;
    }
    printf("%lld", ans);
    return 0;
}
