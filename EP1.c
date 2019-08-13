/*************************************************************************
	> File Name: EP1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 14时45分11秒
 ************************************************************************/

#include<stdio.h>

int is_val(int i){
    if (i % 3 == 0 || i % 5 == 0) return 1;
    return 0;
}
int main(){
    int n, i, sum;
    sum = 0;
    for (i = 0; i < 1000; i++){
        if (is_val(i)){
        sum += i;
        }
    }
    printf("%d",sum);
    return 0;
}
