/*************************************************************************
	> File Name: 143.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月16日 星期五 20时18分32秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define max_n 1000

int arr[max_n + 5];

int is_val1(int x){
    int a = x / 100;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0) return 0;
    }
    return 1;
}

int is_val2(int x){
    int a = x % 100;
    for(int i = 1; i < a; i++){
        if(i * i == a) return 1;
        continue;
    }
    return 0;
}

int main(){
    int a, b;
    int cnt = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        if(i % 6) continue;
        else if(is_val1(i) && is_val2(i)){
            arr[cnt] = i;
            cnt += 1;
        }
    }
    for(int i = 0; i < cnt; i++){
        printf("%d", arr[i]);
        if(i < cnt - 1){
            printf(" ");
        }else{
            printf("\n");
        }
    }
    printf("%d\n", cnt);
    return 0;
}
