/*************************************************************************
	> File Name: 129.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 20时46分08秒
 ************************************************************************/

#include<stdio.h>
int arr[100];
int main(){
    int n;
    int k;
    int min;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i = 0; i < n - 1; i ++){
        min = i;
        for(int j = i + 1; j < n; j ++ ){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = arr[i];
    }
    printf("%d", arr[0]);
    return 0;
}
