/*************************************************************************
	> File Name: 143.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月14日 星期三 17时45分38秒
 ************************************************************************/

#include<stdio.h>

int is_val1(int x){
    if(x % 6 == 0) return 1;
    return 0;
}

int is_val2(int x){
    k = x / 1000 * 10 + x 
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){ 
        if(!(is_val1(i) && is_val2(i) && is_val3(i) && is_val4(i))) continue;
        printf("%d", i);
        printf(" ");
        cnt += 1;
    }
    printf("\n");
    printf("%d\n", cnt);
    return 0;
}
