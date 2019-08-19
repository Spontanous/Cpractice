/*************************************************************************
	> File Name: 140.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 11时16分39秒
 ************************************************************************/

#include<stdio.h>

char arr[30] ={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S' ,'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2 * n - 1; i++){
        if(i < n){
            for(int l = 0; l < n - i -1; l++){
                printf(" ");
            }
            for(int j = 2 * (i+1) - 1; j >= 1; j--){
                printf("%c", arr[i]);
            }
            printf("\n");
        }else if(i < 2 * n - 1){
            for(int p = 0; p <= i - n; p++){
                printf(" ");
            }
            for(int k = 4 * n - 2 * i - 3 ; k >= 1; k--){
                printf("%c", arr[2 * n - 2 - i]);
            }
            printf("\n");
        }
    }
    return 0;
}
