/*************************************************************************
	> File Name: 158.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 23时34分39秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        for(int p = 0; p < i; p++){
            printf(" ");
        }
        if(i == n){
            printf("0");
            printf("\n");
        }else if(i < n){
            printf("%d", n - i);
            for(int l = 2 * (n - i) - 1; l > 0; l -= 1){
                printf(" ");
            }
            printf("%d\n", n - i);
        }
    }

    for(int i = n + 1; i < 2 * n + 1; i++){
        for(int j = 2 * n  - i; j > 0; j--){
            printf(" ");
        }
        printf("%d", i - n);
        for(int q = 0; q < 2 * (i - n) - 1; q++){
            printf(" ");
        }
        printf("%d", i - n);
        printf("\n");
    }
    return 0;
}
