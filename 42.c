/*************************************************************************
	> File Name: 42.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时57分32秒
 ************************************************************************/

#include<stdio.h>
#define max 200
int f[max + 5] = {0};
int arr[max + 5] = {0};
int main(){
    int m, n, k;
    f[0] = 1;
    int cnt = 0;
    scanf("%d%d", &m, &n);
    getchar();
    for(int i = 0;i < m; i++){
        scanf("%d", &k);
        cnt += 1;
        arr[i] = k;
    }
    for(int i = 0; i < max; i++){
        for(int j = arr[i]; j <= max; ++j){
            f[j] += f[j - arr[i]];
        }
    }
    printf("%d", arr[max]);
    return 0;
}
