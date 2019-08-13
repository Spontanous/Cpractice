/*************************************************************************
	> File Name: EP3.1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 16时46分17秒
 ************************************************************************/

#include<stdio.h>
#define N 600851475143
int main(){
    long long i = 2, ans =0, num = N;
    while (i * i <= N){
        if (num % i == 0) ans = i;
        while(num % i == 0) num /= i;
        i += 1;
    
    }
    if (num != 1) ans = num;
    printf("%lld\n", ans);

    return 0;
}
