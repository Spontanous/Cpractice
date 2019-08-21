/*************************************************************************
	> File Name: 159.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月20日 星期二 00时50分08秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char p;
    scanf("%c", &p);
    for(char j = p; j >= 'A'; j--){
        for(int l = 0; l < p - j; l++){
            printf(" ");
        }
        for(char i = j; i >= 'A'; i--){
            printf("%c", i);
        }
        for(int k = 'A'; k < j; k++){
            printf("%c", k);
        }
        printf("\n");
    }
    return 0;
}
