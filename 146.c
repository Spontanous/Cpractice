/*************************************************************************
	> File Name: 146.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 18时35分33秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 50

char arr[max_n + 5];

int main(){
        scanf("%s", arr);
    int len = strlen(arr);
    for(int j = 0; j < len; j++){
        if(arr[j] >= 'a' && arr[j] < 'z' || arr[j] >= 'A' && arr[j] < 'Z'){
            arr[j] += 1;
        }else if(arr[j] == 'z'){
            arr[j] = 'a';
        } else if(arr[j] == 'Z'){
            arr[j] = 'A';
        }else{
            arr[j] = arr[j];
        }
    }  
    printf("%s\n", arr);
    return 0;
}
