/*************************************************************************
	> File Name: 466.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时32分27秒
 ************************************************************************/

#include<stdio.h>

int is_val(int x){
    x = x % 10 + x
}

int main(){
    int n;
    scanf("%d". &n);
    for(int i = 1; i < n; i++){
        if(is_val(int i)){
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}
