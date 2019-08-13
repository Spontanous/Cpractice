/*************************************************************************
	> File Name: EP4.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月02日 星期五 14时22分56秒
 ************************************************************************/

#include<stdio.h>
int is_valu(int x,int base){
    int temp = x, sum = 0;
    while (x){
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    return sum == temp;
}

int main(){
    int ans = 0;
    for (int a = 100; a < 1000; a ++){
        for (int b = a; b < 1000; b ++){
             if (is_valu(a * b, 10) && ans < a * b) ans = a * b;
             }
        }
    printf("%d", ans);
    return 0;
    }
