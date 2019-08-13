/*************************************************************************
	> File Name: zhihsu.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 14时59分57秒
 ************************************************************************/

#include<stdio.h>
int main(){
int N,i, j;
    scanf("%d", &N);
    if (N == 2){
    printf("YES");
    }
    else{
    for (i = 3; i <= 1000; i += 2){
    for (j = 3; j < i; j += 2){
    if (i % j == 0)
        {
            printf("NO");
        break;
        }
    }
        break;
        if (i == j){
        printf("YES");
            break;
        }
    }
        break;
    }
    return 0;

}
