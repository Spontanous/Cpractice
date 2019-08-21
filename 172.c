/*************************************************************************
	> File Name: 172.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 18时39分05秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char arr[15][25];

int main(){
    for(int i = 0; i < 10; i++){
        scanf("%s", arr[i]);
    }
    char tmp[25];
    int min;
    for(int i = 0; i < 10; i++){
        min = i;
        for(int j = i + 1; j < 10; j++){
            if(strcmp(arr[min], arr[j]) > 0){
                min = j;
            }
        }
        strcpy(tmp, arr[i]);
        strcpy(arr[i], arr[min]);
        strcpy(arr[min], tmp);
    }
    for(int i = 0; i < 10; i++){
        printf("%s\n", arr[i]);
    }
    return 0;
}
