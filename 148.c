/*************************************************************************
	> File Name: 148.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 21时21分34秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 50

char arr[max_n + 5];

int main(){
    int len;
    scanf("%s", arr);
    len = strlen(arr);
    for(int i = len - 1; i >= 0; i--){
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}
