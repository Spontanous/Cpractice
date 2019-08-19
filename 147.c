/*************************************************************************
	> File Name: 147.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 21时14分12秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 10000

char arr[max_n + 5];

int main(){
    int len;
    scanf("%s", arr);
    len = strlen(arr);
    if((arr[len - 1] - '0') % 2){
        printf("NO");
    }else {
    printf("YES");
    }
    return 0;
}
