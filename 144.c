/*************************************************************************
	> File Name: 144.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月16日 星期五 13时57分54秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 100

char arr[max_n + 5];

int main(){
    int cnt = 0;
    scanf("%s", arr);
    int len;
    len = strlen(arr);
    for(int i = 0; i <= len - 1; i++){
        if(arr[i] != 'A') continue;
        cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}
