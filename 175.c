/*************************************************************************
	> File Name: 175.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 20时47分18秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int N, M;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        scanf("%d", &N);
    if(N >= 90 && N <= 100){
        cnt1 += 1;
    }else if(N >= 80 && N <= 89){
        cnt2 += 1;
    }else if(N >= 60 && N <= 79){
        cnt3 += 1;
    }else{
        cnt4 += 1;
    }
    }
    printf("You %d\n", cnt1);
    printf("Liang %d\n", cnt2);
    printf("Zhong %d\n", cnt3);
    printf("Cha %d\n", cnt4);
    return 0;
}
