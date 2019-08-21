/*************************************************************************
	> File Name: 173.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 19时12分37秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 10000

char arr[max_n + 5];

int main(){
    scanf("%[^\n]", arr);
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    int len = strlen(arr);
    for(int i = 0; i < len; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z') cnt1 += 1;
        else if(arr[i] >= '0' && arr[i] <= '9') cnt2 += 1;
        else if(arr[i] == ' ') cnt3 += 1;
        else cnt4 += 1;
    }
    printf("%d %d %d %d\n", cnt1, cnt2, cnt3, cnt4);
    return 0;
}
