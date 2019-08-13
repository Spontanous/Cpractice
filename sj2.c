/*************************************************************************
	> File Name: sj2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月30日 星期二 10时22分14秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int N, i, j, c;
    scanf("%d", &N);
    for (i = 1; i <= N; i++){
        printf("%d*%d=%d", i, i, i*i);
        for (j = i+1,c = N-i; j<= N,c > 0; j++, c--){
            if (i < N){
                printf("\t");
            }
            printf("%d*%d=%d", i, j, i*j);
        }
        if (i < N){
            printf("\n");
        }
    }
    return 0;

}
