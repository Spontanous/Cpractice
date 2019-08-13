/*************************************************************************
	> File Name: 133.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 17时40分35秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    int k;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            k = i * j;
            printf("%d*%d=%d", i, j, k);
            if (j < n){
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
