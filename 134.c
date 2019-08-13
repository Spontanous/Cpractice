/*************************************************************************
	> File Name: 134.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月06日 星期二 11时58分35秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    int k = 0;
    int arr[100];
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        if(i % 11 == 0){
            k++;
          arr [k] = i;
        }
    }
    for(int j = 1; j <= k; j++){
        printf("%d", arr[j]);
        if (j < k ){
            printf(" ");
        }
    }
    return 0;
}
