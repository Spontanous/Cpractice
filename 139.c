/*************************************************************************
	> File Name: 139.1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 09时50分34秒
 ************************************************************************/
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 2 * n - 1 ; i++){
        if(i <= n - 1){
            for(int j = 1; j <= n - i; j++){
                printf(" ");
            }
            for(int k = 1; k <= 2 * i; k++){
                printf("A");
            }
       } else if(i == n){
        for(int k = 1; k <= 2 * n; k++){
            printf("A");
        }
       } else {
           for(int j = 1; j <= i - n; j++){
            printf(" ");
           }
           for(int k = 4 * n - 2 * i ; k >= 1; k--){
            printf("A");
           }
       }
        printf("\n");
    }
    return 0;
}
