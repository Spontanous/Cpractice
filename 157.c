/*************************************************************************
	> File Name: 157.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 22时31分00秒
 ************************************************************************/

#include<stdio.h>

char arr[30] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T' ,'U','V', 'W', 'X', 'Y', 'Z'};

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){ 
        for(int p = 0; p < i; p++){
            printf(" ");
        }
        for(int j = i; j < n; j++){
            printf("%c", arr[j]);
        }
        for(int k = n - 2; k >=  i;  k--){
            printf("%c", arr[k]);
        }
        printf("\n");
    }
    for(int i = n; i < 2 * n - 1; i++){
        for(int p = 2 * n - 2 - i; p > 0; p--){
            printf(" ");
        }
        for(int j = 2 * n - 2 - i; j <= n - 1; j++){
            printf("%c", arr[j]);
        }
        for(int k = n - 2; k >= 2 * n - 2 - i; k--){
            printf("%c", arr[k]);
        }
        printf("\n");
    }
    return 0;
}
