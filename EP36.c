/*************************************************************************
	> File Name: EP36.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月02日 星期五 18时53分20秒
 ************************************************************************/

#include<stdio.h>
#define max 1000000

int is_val(int x){
    while (x){
        x = x * 10 + x % 10;
        x = x/10;
    }
    return x; 
}

int is_binary (int y){
    int c[32], i = 0;
    do {
        c[i++] = y % 2;
        y /= 2;
    } while (y != 0);
    
    for (i --; i >= 0; i--)
    return c[i];

     while (y){
        y = y * 2 + y % 2;
        y = y/2;
    }
    return y;
}

int main(){
    int sum = 0;
    for (int i = 1; i < max; i++){
    if (is_val(i) && is_binary(i)) sum += i;
    printf("%d", sum);
    }

}
