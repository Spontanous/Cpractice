/*************************************************************************
	> File Name: 466.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时32分27秒
 ************************************************************************/

#include<stdio.h>

int is_val(int x, int base){
   int tmp = x, sum = 0;
    while(x){
        sum = sum * base + x % base;
        x /= base;
    }
    return sum == tmp;
}

int main(){
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(is_val(i, 10)){
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}
