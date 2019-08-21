/*************************************************************************
	> File Name: 154.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时47分55秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = n; i > 0; i--){
        for(int j = i; j >= 1; j--){
            printf("%d", j);
            if(j > 1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
