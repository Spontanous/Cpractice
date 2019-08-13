/*************************************************************************
	> File Name: juzheng1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月02日 星期五 15时55分46秒
 ************************************************************************/

#include<stdio.h>
#include <stdio.h>

int main() {
    int matrix[3][3];
    int i;
    int j;
    int k;
    for (i =1 ; i <= 3; i++){
        for (j = 1; j <= 3 ; j++){
            scanf("%d", &k);
            matrix[i][j] = k;
        }
    }
    
    for (i = 0; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            printf("%d",matrix[i][j]);
        }
    }

    return 0;
}
