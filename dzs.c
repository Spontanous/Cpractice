/*************************************************************************
	> File Name: dzs.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月07日 星期三 20时27分19秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char num[2005];
    int ans[2005] = {0};
int main(){
    for (int i = 0; i < 2; i++){
        scanf("%s", num);
        int len = strlen(num);
        if (ans[0] < len) ans[0] = len;
        for(int i = 0; i < len; i++){
            ans[len - i] += (num[i] - '0');
        }
        for (int i = 1; i < ans[0]; i ++){
            if (ans[i] < 10) continue;
            ans[i + 1] = ans[i] /10;
            ans[i] %= 10;
            ans[0] += (i == ans[0]);
        }
    }
    for (int i = ans[0]; i > 0; i--){
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
