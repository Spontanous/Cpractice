/*************************************************************************
	> File Name: 149.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 21时26分37秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 50

char arr[max_n + 5];

int main(){
    int len;
    int cnt = 0;
    scanf("%s", arr);
    len = strlen(arr);
    for(int i = len - 1; i >= 0; i--){
        if(arr[i] != ' ') break;
        cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}
