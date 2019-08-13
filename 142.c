/*************************************************************************
	> File Name: 142.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 19时35分53秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int is_val1(int x){
    int temp = x;
    int sum = 0;
    while (x){
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    return sum == temp;
}

int is_val2(int x){
    for(int i = 2; i <= sqrt(x); i ++){
        if(x % i == 0)  return 0;
    }
    return 1;
}
int main(){
   int a, b;
    int cnt = 0;
    int arr[100];

    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
       if(is_val1(i) && is_val2(i)){
           arr[cnt] = i;
           cnt++;
       }
    }
    for(int k = 0; k < cnt; k++){
        printf("%d", arr[k]);
        if (k < cnt - 1){
            printf(" ");
        }
    }
    return 0;
}
