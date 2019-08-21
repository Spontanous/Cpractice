/*************************************************************************
	> File Name: 155.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时53分25秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    int k;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        k = i * i - i + 3;
        sum += k;
        printf("%d\n", k);
    }
    printf("%d\n", sum);
    return 0;
}
