/*************************************************************************
	> File Name: sj.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月30日 星期二 09时41分42秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,i,j,c;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
    printf("%d",i);
        for (j = i,c = n-i; c > 0; c--){
            if (i < n){
            printf(" ");
            }
            printf("%d", j);
        
        }
        if (i < n){
        printf("\n");
        }
    }
    return 0;
}
