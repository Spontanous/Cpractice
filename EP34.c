/*************************************************************************
	> File Name: EP34.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月02日 星期五 18时08分28秒
 ************************************************************************/

#include<stdio.h>
#define max 2540160

int num[10];

void init(int *num){
    num[0] = 1;
    for (int i = 1; i < 10; i++){
        num[i] = num[i -1] * i;
    }
    return ;
}

int is_val(int x){
    int temp = x, sum = 0;
    while (x) {
      sum += num[x % 10];
        x /= 10;
    }
    return sum == temp;
}

int main(){
    int sum = 0;
    init(num);
    for (int i = 3; i<= max; i++){
        if (is_val(i)) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
