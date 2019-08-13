/*************************************************************************
	> File Name: 132.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 15时57分27秒
 ************************************************************************/

#include<stdio.h>
int arr[100];
int main(){
    int n;
  long long  int ans = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        ans = ans * arr[i];
    }
    printf("%lld", ans);
    return 0;
}
