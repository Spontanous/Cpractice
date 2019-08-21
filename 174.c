/*************************************************************************
	> File Name: 174.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 19时48分49秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 10000

char arr[max_n + 5];
char matrix[3 * max_n + 5];

int main(){
    scanf("%[^\n]", arr);
    int len = strlen(arr);
    for(int i = 0, j = 0; i < len; i++){
        if(arr[i] != ' '){
            matrix[j] = arr[i];
            j++;
        }else{
            matrix[j] = '%';
            matrix[j + 1] = '2';
            matrix[j + 2] = '0';
            j += 3;
        }
    }
    printf("%s\n", matrix);
    return 0;
}
