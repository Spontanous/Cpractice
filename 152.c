/*************************************************************************
	> File Name: 152.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 18时26分15秒
 ************************************************************************/

#include<stdio.h>

char *arr[] = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
};

int main(){
    int n;
    int i;
    char *d;
    scanf("%d", &n);
    if(n <= 4){
        i = n + 2;
    }else {
        i = 3 - 7 % (n - 1);
    }
    switch(i){
        case 0: d = arr[0]; break;
        case 1: d = arr[1]; break;
        case 2: d = arr[2]; break;
        case 3: d = arr[3]; break;
        case 4: d = arr[4]; break;
        case 5: d = arr[5]; break;
        case 6: d = arr[6]; break;
        break;
    }
    printf("%s\n", d);
    return 0;
}
