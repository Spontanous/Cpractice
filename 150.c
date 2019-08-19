/*************************************************************************
	> File Name: 150.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月17日 星期六 13时04分27秒
 ************************************************************************/

#include<stdio.h>
#define max_n 200

int arr[max_n + 5][max_n + 5];

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &arr[i][j]);
            }
        getchar();
        }

    for(int k = 0; k < n; k++){
        for(int l = m - 1; l >= 0; l--){
            printf("%d", arr[l][k]);
            if(l > 0){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 
