/*************************************************************************
	> File Name: EP3.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 15时16分24秒
 ************************************************************************/

#include<stdio.h>
#define maxnum 4000000
int fib[45];

int main(){
   fib[1] = 1; fib[2] = 2;
    int n = 2;
    while (fib[n-1] + fib[n -2] < maxnum){
        n++;
        fib[n] = fib[n-1] + fib[n-2];
    }
    long long sum = 0;
    for (int i = 1; i <= n; i++){
    if (i % 2 != 0 ) continue;
    sum += i;
    }
    printf("%lld\n", sum);
   return 0; 
}
