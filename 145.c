/*************************************************************************
	> File Name: 145.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 11时24分07秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char string[25][105];
char tmp[25];

int main(){
    int n;
    int min;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", string[i]);
    }
    for(int i = 0; i < n - 1; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(strlen(string[i]) > strlen(string[j])){
                min = j;
            }
        }
        strcpy(tmp, string[i]);
        strcpy(string[i], string[min]);
        strcpy(string[min], tmp);
    }
    printf("%s", string[n -1]);
    return 0;
}
