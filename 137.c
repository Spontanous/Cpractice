/*************************************************************************
	> File Name: 137.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月07日 星期三 17时43分54秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int cnt = 0;
    int arr[26] = {'A','B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
                 'M', 'N', 'O', 'P','Q', 'R', 'S', 'T', 'U', 'V','W', 'X', 'Y', 'Z'};
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            printf("%c", arr[cnt]);
            cnt++;
        }
        printf("\n");
    }

    return 0;
}
