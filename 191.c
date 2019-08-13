/*************************************************************************
	> File Name: 191.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月06日 星期二 18时47分15秒
 ************************************************************************/

#include<stdio.h>
int is_prime(int x){
    for(i = 0; i < sqrt(x); i++){
        if(x % i == 0) continue;
        return 1;
    }
}

int main(){
    int l, r;
    int cnt = 0;
    scanf("%d%d", &l, &r);
    for(int i = l; i < r; i++){
        for (int j = 0; j <= r; j++){
            if (is_prime(i)){
                cnt++;
                arr[cnt] = i;
            }
        }
    }
    
    return 0;
}
