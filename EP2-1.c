/*************************************************************************
	> File Name: EP2-1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 15时51分01秒
 ************************************************************************/

#include<stdio.h>
#define maxnum 4000000
int main(){
    int a = 1, b =2, sum = 2;
    while (a + b < maxnum){
    b = a + b;
        a = b -a;
        if (!(b & 1)) sum += b;
    }
    printf ("%d", sum);
    return 0;
}


