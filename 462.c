/*************************************************************************
	> File Name: 462.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 16时32分42秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max 10000

char num[100][55]
int ans[55] = {0};
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", k);
        scanf("%s", num[i]);
    }
    for(int i = 1; i <= n; i++){
        len = strlen(num[i]);
        T = num[i][len - 1] - '0';
        if(T % 2 == 0) {
            g += 1;
        }else {
            b += 1;
        }
    }
    printf("%d %d %d", g, b, );
    return 0;
}
