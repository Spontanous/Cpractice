/*************************************************************************
	> File Name: 131.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 15时47分03秒
 ************************************************************************/

#include<stdio.h>
int arr[100];
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }

    int temp;
    int min;
    for(int i = 0; i < n - 1; i ++){
        min = i;
        for(int j = i + 1; j < n; j ++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
            temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("%d", arr[n - 1] - arr[0]);
    return 0;
}
