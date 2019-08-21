/*************************************************************************
	> File Name: 165.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 16时01分23秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    long long c;
    scanf("%lld", &c);
    int cnt = 0;
    for(long long i = 1; i < c; i++){
       long long j = sqrt(c * c - i * i);
                if(sqrt(i * i + j * j) == c ) cnt += 1;
                continue;
    }
    printf("%d\n", cnt / 2);
    return 0;
}
