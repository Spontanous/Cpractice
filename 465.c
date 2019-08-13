/*************************************************************************
	> File Name: 465.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时41分04秒
 ************************************************************************/

#include<stdio.h>

int digit(long long x, long long y){
    int l;
    for(int i = 1; i <= y; i++){
        l = x % 10;
        x = x / 10;
    }
    return l;
}

int main(){
    long long n, k;
   
    scanf("%lld%lld", &n, &k);
    printf("%d", digit(n, k));
    return 0;
}
