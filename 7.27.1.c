/*************************************************************************
	> File Name: 7.27.1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 19时15分20秒
 ************************************************************************/

#include<stdio.h>
int f(int n){
     if (n == 0) return 1;
    return n*f(n-1);
}
int main(){
int n;
     while (scanf ("%d", &n)){
     printf("%d", f(n));
     }
    return 0;
}
