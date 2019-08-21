/*************************************************************************
	> File Name: 156.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 20时31分10秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define max_n 1000
int arr[max_n + 5];

int is_val1(int x){ 
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0) return 0;
    }
    return 1;
}

int is_val2(int x){
    int a = x % 100;
    for(int i = 1; i <= a; i++){
        if(i * i == a) return 1;
        continue;
    }
    return 0;
}

int is_val3(int x){
    int b = x / 100;
    for(int i = 1; i <= b; i++){
        if(i * i == b) return 1;
        continue;
    }
    return 0;
}

int main(){
    int a, b;
    int cnt = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        if(is_val1(i) && is_val2(i) && is_val3(i)){
            arr[cnt] = i;
            cnt += 1;
        }
    }
    for(int i = 0; i < cnt; i++){
        printf("%d", arr[i]);
        if(i < cnt - 1){
            printf(" ");
        }
    }
    printf("\n");
    printf("%d\n", cnt);
    return 0;
}
