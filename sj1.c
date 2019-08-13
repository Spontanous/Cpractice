/*************************************************************************
	> File Name: sj1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月30日 星期二 09时53分17秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n, i, j, c;
    scanf("%d", &n);
    for (i = n; i > 0; i--){
    printf("%d",i);
        for (j = i - 1; j > 0; j--){
            if(i>1){
            printf(" ");
            } 
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;


}
